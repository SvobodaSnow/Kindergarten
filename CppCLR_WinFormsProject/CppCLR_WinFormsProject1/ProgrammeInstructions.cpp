#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <map>
#include <Windows.h>
#include <fstream>
#include "ListChildrenInMemory.cpp"

class ProgrammeInstructions {
private:
	bool work = true;
    bool changesSaved = true;
    int command;
    ListChildrenInMemory listChildrenInMemory = ListChildrenInMemory();
    std::string name, surname, patronymic;
    char delimer{ '.' };

    void printFunctions() {
        std::cout << "Список доступных команд:" << std::endl;
        std::cout << " 1 - добавить нового воспитанника;" << std::endl;
        std::cout << " 2 - найти воспитанника по ФИО;" << std::endl;
        std::cout << " 3 - вывести всех воспитанников;" << std::endl;
        std::cout << " 4 - вывести всех воспитанников старшей группы;" << std::endl;
        std::cout << " 5 - вывести всех воспитанников младшей группы;" << std::endl;
        std::cout << " 6 - вывести всех воспитанников, которым пора делать прививку от коклюша;" << std::endl;
        std::cout << " 7 - вывести всех воспитанников, которым пора делать прививку от палиомелита;" << std::endl;
        std::cout << " 8 - вывести всех воспитанников, которым пора делать прививку от желтухи;" << std::endl;
        std::cout << " 9 - вывести всех воспитанников, которым пора делать прививку от туберкулеза;" << std::endl;
        std::cout << "10 - изменить дату прививки от коклюша;" << std::endl;
        std::cout << "11 - изменить дату прививки от палиомелита;" << std::endl;
        std::cout << "12 - изменить дату прививки от желтухи;" << std::endl;
        std::cout << "13 - изменить дату прививки от туберкулеза;" << std::endl;
        std::cout << "14 - изменить дату медотвода для воспитанника;" << std::endl;
        std::cout << "15 - перевести воспитанника в старшую группу;" << std::endl;
        std::cout << "16 - отчислить воспитанника;" << std::endl;
        std::cout << "17 - сохранение в файл;" << std::endl;
        std::cout << " 0 - выход из программы." << std::endl << std::endl;
    }


    void enterCommand() {
        std::cout << "Введите команду:" << std::endl;
        std::cin >> command;
    }

    void exitProgramm() {
        bool saves;
        if (!changesSaved) {
            std::cout << std::endl << "Есть несохраненные изменения! Сохранить перед выходом? (0 - нет; 1 - да)" << std::endl;
            std::cin >> saves;
            if (saves) {
                saveAllDataInFile();
                std::cout << "Изменения сохранены!" << std::endl;
            }
        }
        work = false;
    }

    void addNewChild() {
        int group;
        KindergartenStudent kindergartenStudent = KindergartenStudent();
        std::string stringDate;
        Date date;
        try {
            getNameChild();
            kindergartenStudent.setName(name + " " + surname + " " + patronymic);

            std::cout << "Введите группу воспитанника: 1 - младшая; 2 - старшая;" << std::endl;
            std::cin >> group;
            if (group == 1) {
                kindergartenStudent.setGroup(Group::JUNIOR);
            }
            else if (group == 2) {
                kindergartenStudent.setGroup(Group::SENIOR);
            }
            else {
                std::cout << "Введен неверный идентификатор группы!" << std::endl;
                return;
            }

            std::cout << "Введите дату зачисления в формате DD.MM.YYYY:" << std::endl;
            std::cin >> stringDate;
            date.dateFromString(stringDate, delimer);
            kindergartenStudent.setEnrolmentDate(date);

            std::cout << "Введите дату прививки от коклюша в формате DD.MM.YYYY:" << std::endl;
            std::cin >> stringDate;
            date.dateFromString(stringDate, delimer);
            kindergartenStudent.setDatePertussisVaccination(date);

            std::cout << "Введите дату прививки от палиомелита в формате DD.MM.YYYY:" << std::endl;
            std::cin >> stringDate;
            date.dateFromString(stringDate, delimer);
            kindergartenStudent.setDatePolioVaccination(date);

            std::cout << "Введите дату прививки от желтухи в формате DD.MM.YYYY:" << std::endl;
            std::cin >> stringDate;
            date.dateFromString(stringDate, delimer);
            kindergartenStudent.setDateJaundiceVaccination(date);

            std::cout << "Введите дату прививки от туберкулеза в формате DD.MM.YYYY:" << std::endl;
            std::cin >> stringDate;
            date.dateFromString(stringDate, delimer);
            kindergartenStudent.setDateTuberculosisVaccination(date);

            std::cout << "Введите дату медицинского отвода от прививок в формате DD.MM.YYYY (Если медицинского отвода нет введите 1.1.1):" << std::endl;
            std::cin >> stringDate;
            date.dateFromString(stringDate, delimer);
            kindergartenStudent.setDateEndMedicalClearance(date);

            saveNewChild(kindergartenStudent);
            listChildrenInMemory.addKindergartenStudent(kindergartenStudent);
        }
        catch (Exception ex) {
            std::cout << ex.message << std::endl;
        }
    }

    void getNameChild() {
        std::cout << "Введите ФИО воспитанника:" << std::endl;
        std::cin >> name >> surname >> patronymic;
    }

    void getCildByName() {
        getNameChild();
        std::cout << listChildrenInMemory.getByName(name + " " + surname + " " + patronymic).toString() << std::endl;
    }

    void getAllKindergartenStudent() {
        printKindergartenStudents(listChildrenInMemory.getAllKindergartenStudent());
    }

    void printKindergartenStudents(std::map<std::string, KindergartenStudent> kindergartenStudents) {
        for (auto kindergartenStudentFromListIterator : kindergartenStudents) {
            std::cout << kindergartenStudentFromListIterator.second.toString() << std::endl;
        }
    }

    void getAllKindergartenStudentFromSeniorGroup() {
        printKindergartenStudents(listChildrenInMemory.getAllKindergartenStudentFromSeniorGroup());
    }

    void getAllKindergartenStudentFromJuniorGroup() {
        printKindergartenStudents(listChildrenInMemory.getAllKindergartenStudentFromJuniorGroup());
    }

    void getKindergartenStudentsPertussisVaccination() {
        printKindergartenStudents(listChildrenInMemory.getKindergartenStudentsPertussisVaccination());
    }

    void getKindergartenStudentsPolioVaccination() {
        printKindergartenStudents(listChildrenInMemory.getKindergartenStudentsPolioVaccination());
    }

    void getKindergartenStudentsJaundiceVaccination() {
        printKindergartenStudents(listChildrenInMemory.getKindergartenStudentsJaundiceVaccination());
    }

    void getKindergartenStudentsTuberculosisVaccination() {
        printKindergartenStudents(listChildrenInMemory.getKindergartenStudentsTuberculosisVaccination());
    }

    void changeDateEndMedicalClearance() {
        std::string stringDate;
        Date date;
        getNameChild();
        std::cout << "Введите дату медицинского отвода от прививки в формате DD.MM.YYYY:" << std::endl;
        std::cin >> stringDate;
        date.dateFromString(stringDate, delimer);
        listChildrenInMemory.changeDateEndMedicalClearance(name + " " + surname + " " + patronymic, date);
    }

    void changeDatePertussisVaccination() {
        std::string stringDate;
        Date date;
        getNameChild();
        std::cout << "Введите дату медицинского отвода от прививки в формате DD.MM.YYYY:" << std::endl;
        std::cin >> stringDate;
        date.dateFromString(stringDate, delimer);
        listChildrenInMemory.changeDatePertussisVaccination(name + " " + surname + " " + patronymic, date);
    }

    void changeDatePolioVaccination() {
        std::string stringDate;
        Date date;
        getNameChild();
        std::cout << "Введите дату медицинского отвода от прививки в формате DD.MM.YYYY:" << std::endl;
        std::cin >> stringDate;
        date.dateFromString(stringDate, delimer);
        listChildrenInMemory.changeDatePolioVaccination(name + " " + surname + " " + patronymic, date);
    }

    void changeDateJaundiceVaccination() {
        std::string stringDate;
        Date date;
        getNameChild();
        std::cout << "Введите дату медицинского отвода от прививки в формате DD.MM.YYYY:" << std::endl;
        std::cin >> stringDate;
        date.dateFromString(stringDate, delimer);
        listChildrenInMemory.changeDateJaundiceVaccination(name + " " + surname + " " + patronymic, date);
    }

    void changeDateTuberculosisVaccination() {
        std::string stringDate;
        Date date;
        getNameChild();
        std::cout << "Введите дату медицинского отвода от прививки в формате DD.MM.YYYY:" << std::endl;
        std::cin >> stringDate;
        date.dateFromString(stringDate, delimer);
        listChildrenInMemory.changeDateTuberculosisVaccination(name + " " + surname + " " + patronymic, date);
    }

    void changeChildGroupOnSenior() {
        getNameChild();
        try {
            listChildrenInMemory.changeChildGroupOnSenior(name + " " + surname + " " + patronymic);
        }
        catch (Exception ex) {
            std::cout << ex.message << std::endl;
        }
        catch (Warning war) {
            int selection;
            std::cout << war.message << std::endl;
            std::cout << "Уверены, что хотите перевести в старшую группу? 1 - да; 2 - нет." << std::endl;
            std::cin >> selection;

            if (selection == 1) {
                listChildrenInMemory.changeForciblyChildGroupOnSenior(name + " " + surname + " " + patronymic);
            }
        }
    }

    void expelChild() {
        getNameChild();
        listChildrenInMemory.expel(name + " " + surname + " " + patronymic);
    }

    void saveAllDataInFile() {
        std::ofstream file("ListChildrenInMemory.txt");

        for (auto kindergartenStudentFromListIterator : listChildrenInMemory.getAllKindergartenStudent()) {
            file << kindergartenStudentFromListIterator.second.toString() << std::endl;
        }

        file.close();
    }

    void saveNewChild(KindergartenStudent kindergartenStudent) {
        std::ofstream file("ListChildrenInMemory.txt", std::ios_base::app);

        file << kindergartenStudent.toString() << std::endl;

        file.close();
    }

    void readDataInFile() {
        std::string line;
        std::ifstream file("ListChildrenInMemory.txt");

        while (std::getline(file, line)) {
            listChildrenInMemory.addKindergartenStudent(KindergartenStudent(line, delimer));
        }

        file.close();
    }

public:
	ProgrammeInstructions() {
        readDataInFile();
    }

	void startProgramme() {
		while (work) {
            printFunctions();
            enterCommand();
            switch (command) {
            case 1:
                addNewChild();
                break;
            case 2:
                getCildByName();
                break;
            case 3:
                getAllKindergartenStudent();
                break;
            case 4:
                getAllKindergartenStudentFromSeniorGroup();
                break;
            case 5:
                getAllKindergartenStudentFromJuniorGroup();
                break;
            case 6:
                getKindergartenStudentsPertussisVaccination();
                break;
            case 7:
                getKindergartenStudentsPolioVaccination();
                break;
            case 8:
                getKindergartenStudentsJaundiceVaccination();
                break;
            case 9:
                getKindergartenStudentsTuberculosisVaccination();
                break;
            case 10:
                changeDatePertussisVaccination();
                changesSaved = false;
                break;
            case 11:
                changeDatePolioVaccination();
                changesSaved = false;
                break;
            case 12:
                changeDateJaundiceVaccination();
                changesSaved = false;
                break;
            case 13:
                changeDateTuberculosisVaccination();
                changesSaved = false;
                break;
            case 14:
                changeDateEndMedicalClearance();
                changesSaved = false;
                break;
            case 15:
                changeChildGroupOnSenior();
                changesSaved = false;
                break;
            case 16:
                expelChild();
                changesSaved = false;
                break;
            case 17:
                saveAllDataInFile();
                changesSaved = true;
                break;
            case 0:
                exitProgramm();
                break;
            default:
                std::cout << "Введена неверная команда!" << std::endl;
            }
		}
	}
};