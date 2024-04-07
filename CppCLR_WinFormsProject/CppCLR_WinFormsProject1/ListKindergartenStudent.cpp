#include "pch.h"
#include "KindergartenStudent.cpp"

#include <fstream>

ref class ListKindergartenStudent {
private:
	System::Collections::Hashtable^ kindergartenStudents = gcnew System::Collections::Hashtable();
	System::String^ fileName;
	bool IsSaved = true;

	bool chekJuniorGroup(KindergartenStudent^ kindergartenStudent) {
		if (kindergartenStudent->getGroup() == Group::JUNIOR) {
			return true;
		}
		else {
			return false;
		}
	}

	bool chekSeniorGroup(KindergartenStudent^ kindergartenStudent) {
		if (kindergartenStudent->getGroup() == Group::SENIOR) {
			return true;
		}
		else {
			return false;
		}
	}

	bool whetherFewMonthsPassed(System::DateTime^ dateTime, int fewMonth) {
		System::DateTime^ now = System::DateTime().UtcNow;

		if ((now->Year - dateTime->Year) * 12 + now->Month - dateTime->Month > fewMonth) {
			return true;
		}
		else if ((now->Year - dateTime->Year) * 12 + now->Month - dateTime->Month < fewMonth) {
			return false;
		}
		else {
			if (now->Day >= dateTime->Day) {
				return true;
			}
			else {
				return false;
			}
		}
	}

	bool checkDateInFuture(System::DateTime^ dateTime) {
		System::DateTime^ now = System::DateTime().UtcNow;

		if (*now < *dateTime) {
			return true;
		}
		else {
			return false;
		}
	}

	bool checkDatePertussisVaccination(KindergartenStudent^ kindergartenStudent) {
		if (whetherFewMonthsPassed(kindergartenStudent->getDatePertussisVaccination(), 12) && !checkDateInFuture(kindergartenStudent->getDateEndMedicalClearance())) {
			return true;
		}
		else {
			return false;
		}
	}

	bool checkDatePolioVaccination(KindergartenStudent^ kindergartenStudent) {
		if (whetherFewMonthsPassed(kindergartenStudent->getDatePolioVaccination(), 6) && !checkDateInFuture(kindergartenStudent->getDateEndMedicalClearance())) {
			return true;
		}
		else {
			return false;
		}
	}

	bool checkDateJaundiceVaccination(KindergartenStudent^ kindergartenStudent) {
		if (whetherFewMonthsPassed(kindergartenStudent->getDateJaundiceVaccination(), 4) && !checkDateInFuture(kindergartenStudent->getDateEndMedicalClearance())) {
			return true;
		}
		else {
			return false;
		}
	}

	bool checkDateTuberculosisVaccination(KindergartenStudent^ kindergartenStudent) {
		if (whetherFewMonthsPassed(kindergartenStudent->getDateTuberculosisVaccination(), 3) && !checkDateInFuture(kindergartenStudent->getDateEndMedicalClearance())) {
			return true;
		}
		else {
			return false;
		}
	}

	std::string StringToString(System::String^ line) {
		std::string str;

		for (int i = 0; i < line->Length; i++) {
			str += line[i];
		}

		return str;
	}

	System::String^ StringToString(std::string line) {
		System::String^ str;

		for (int i = 0; i < line.size(); i++) {
			str += line[i];
		}

		return str;
	}

public:
	ListKindergartenStudent() {};

	bool isSaved() {
		return IsSaved;
	}

	System::Void addNewKindergarten(KindergartenStudent^ kindergartenStudent) {
		kindergartenStudents->Add(kindergartenStudent->getName(), kindergartenStudent);

		IsSaved = false;
	}

	KindergartenStudent^ getKindergartenByName(System::String^ name) {
		return (KindergartenStudent^) kindergartenStudents[name];
	}

	System::Collections::ICollection^ getAllKindergarten() {
		return kindergartenStudents->Values;
	}

	System::Collections::ArrayList^ getAllKiddergartenInSeniorGroup() {
		System::Collections::ArrayList^ kindergartenStudentsInSeniorGroup = gcnew System::Collections::ArrayList();

		for each (System::Object^ var in kindergartenStudents->Values)
		{
			if (chekSeniorGroup((KindergartenStudent^) var)) {
				kindergartenStudentsInSeniorGroup->Add((KindergartenStudent^)var);
			}
		}

		return kindergartenStudentsInSeniorGroup;
	}

	System::Collections::ArrayList^ getAllKiddergartenInJuniorGroup() {
		System::Collections::ArrayList^ kindergartenStudentsInJuniorGroup = gcnew System::Collections::ArrayList();

		for each (System::Object ^ var in kindergartenStudents->Values)
		{
			if (chekJuniorGroup((KindergartenStudent^) var)) {
				kindergartenStudentsInJuniorGroup->Add((KindergartenStudent^) var);
			}
		}

		return kindergartenStudentsInJuniorGroup;
	}

	System::Collections::ArrayList^ getKindergartenNeedPertussisVaccination() {
		System::Collections::ArrayList^ kindergartenStudentsNeedPertussisVaccination = gcnew System::Collections::ArrayList();

		for each (System::Object ^ var in kindergartenStudents->Values) 
		{
			if (checkDatePertussisVaccination((KindergartenStudent^)var)) {
				kindergartenStudentsNeedPertussisVaccination->Add((KindergartenStudent^)var);
			}
		}

		return kindergartenStudentsNeedPertussisVaccination;
	}

	System::Collections::ArrayList^ getKindergartenNeedPolioVaccination() {
		System::Collections::ArrayList^ kindergartenStudentsNeedPolioVaccination = gcnew System::Collections::ArrayList();

		for each (System::Object ^ var in kindergartenStudents->Values)
		{
			if (checkDatePolioVaccination((KindergartenStudent^)var)) {
				kindergartenStudentsNeedPolioVaccination->Add((KindergartenStudent^)var);
			}
		}

		return kindergartenStudentsNeedPolioVaccination;
	}

	System::Collections::ArrayList^ getKindergartenNeedJaundiceVaccination() {
		System::Collections::ArrayList^ kindergartenStudentsNeedJaundiceVaccination = gcnew System::Collections::ArrayList();

		for each (System::Object ^ var in kindergartenStudents->Values)
		{
			if (checkDateJaundiceVaccination((KindergartenStudent^)var)) {
				kindergartenStudentsNeedJaundiceVaccination->Add((KindergartenStudent^)var);
			}
		}

		return kindergartenStudentsNeedJaundiceVaccination;
	}

	System::Collections::ArrayList^ getKindergartenNeedTuberculosisVaccination() {
		System::Collections::ArrayList^ kindergartenStudentsNeedTuberculosisVaccination = gcnew System::Collections::ArrayList();

		for each (System::Object ^ var in kindergartenStudents->Values)
		{
			if (checkDateTuberculosisVaccination((KindergartenStudent^)var)) {
				kindergartenStudentsNeedTuberculosisVaccination->Add((KindergartenStudent^)var);
			}
		}

		return kindergartenStudentsNeedTuberculosisVaccination;
	}

	System::Void changeDatePertussisVaccination(System::String^ name, System::DateTime dateTime) {
		KindergartenStudent^ ks = (KindergartenStudent^)kindergartenStudents[name];
		ks->setDatePertussisVaccination(dateTime);

		IsSaved = false;
	}

	System::Void changeDatePolioVaccination(System::String^ name, System::DateTime dateTime) {
		KindergartenStudent^ ks = (KindergartenStudent^)kindergartenStudents[name];
		ks->setDatePolioVaccination(dateTime);

		IsSaved = false;
	}

	System::Void changeDateJaundiceVaccination(System::String^ name, System::DateTime dateTime) {
		KindergartenStudent^ ks = (KindergartenStudent^)kindergartenStudents[name];
		ks->setDateJaundiceVaccination(dateTime);

		IsSaved = false;
	}

	System::Void changeDateTuberculosisVaccination(System::String^ name, System::DateTime dateTime) {
		KindergartenStudent^ ks = (KindergartenStudent^)kindergartenStudents[name];
		ks->setDateTuberculosisVaccination(dateTime);

		IsSaved = false;
	}

	System::Void changeDateEndMedicalClearance(System::String^ name, System::DateTime dateTime) {
		KindergartenStudent^ ks = (KindergartenStudent^)kindergartenStudents[name];
		ks->setDateEndMedicalClearance(dateTime);

		IsSaved = false;
	}

	System::Void expellingKindergarten(System::String^ name) {
		kindergartenStudents->Remove(name);

		IsSaved = false;
	}

	System::Void moveKindergartenInSeniorGroup(System::String^ name) {
		KindergartenStudent^ ks = (KindergartenStudent^)kindergartenStudents[name];
		if (whetherFewMonthsPassed(ks->getEnrolmentDate(), 12)) {
			ks->setGroup(Group::SENIOR);
		}
		else {
			throw LocalException("С момента зачисления не прошел год!");
		}

		IsSaved = false;
	}

	System::Void moveForceKindergartenInSeniorGroup(System::String^ name) {
		KindergartenStudent^ ks = (KindergartenStudent^)kindergartenStudents[name];
		ks->setGroup(Group::SENIOR);

		IsSaved = false;
	}

	System::Void loadFromFile(System::String^ fileName) {
		if (IsSaved) {
			loadForceFromFile(fileName);
		}
		else {
			throw LocalException("Данные не сохранены");
		}
	}

	System::Void loadForceFromFile(System::String^ fileName) {
		this->fileName = fileName;
		char delimer{ '.' };
		array<System::String^>^ arrayKindergartenString = System::IO::File::ReadAllLines(fileName);

		for each (System::String ^ var in arrayKindergartenString)
		{
			KindergartenStudent^ kindergartenStudent = gcnew KindergartenStudent(var, delimer);

			kindergartenStudents->Add(kindergartenStudent->getName(), kindergartenStudent);
		}
	}

	System::Void saveToFile() {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(fileName);

		for each (System::Object ^ var in kindergartenStudents->Values)
		{
			KindergartenStudent^ ks = (KindergartenStudent^)var;
			sw->WriteLine(ks->toString());
		}

		sw->Close();
		IsSaved = true;
	}

	System::Void saveAsFile(System::String^ fileName) {
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(fileName);

		for each (System::Object ^ var in kindergartenStudents->Values)
		{
			KindergartenStudent^ ks = (KindergartenStudent^)var;
			sw->WriteLine(ks->toString());
		}

		sw->Close();
		IsSaved = true;
	}

	System::Void changeAllDate(
		System::String^ name,
		System::DateTime datePertussisVaccination,
		System::DateTime datePolioVaccination,
		System::DateTime dateJaundiceVaccination,
		System::DateTime dateTuberculosisVaccination,
		System::DateTime dateEndMedicalClearance)
	{
		KindergartenStudent^ ks = (KindergartenStudent^)kindergartenStudents[name];
		ks->setDatePertussisVaccination(datePertussisVaccination);
		ks->setDatePolioVaccination(datePolioVaccination);
		ks->setDateJaundiceVaccination(dateJaundiceVaccination);
		ks->setDateTuberculosisVaccination(dateTuberculosisVaccination);
		ks->setDateEndMedicalClearance(dateEndMedicalClearance);
	}
};