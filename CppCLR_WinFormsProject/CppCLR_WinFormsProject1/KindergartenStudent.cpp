#include "pch.h"

#include <string>

struct LocalException {
	std::string message;

	LocalException(std::string message) {
		this->message = message;
	}
};

enum Group {SENIOR, JUNIOR};

ref class KindergartenStudent
{
private:
	System::String^ name;
	Group group;
	System::DateTime enrolmentDate;
	System::DateTime datePertussisVaccination;
	System::DateTime datePolioVaccination;
	System::DateTime dateJaundiceVaccination;
	System::DateTime dateTuberculosisVaccination;
	System::DateTime dateEndMedicalClearance;

public:
	KindergartenStudent(
		System::String^ name,
		Group group,
		System::DateTime enrolmentDate,
		System::DateTime datePertussisVaccination,
		System::DateTime datePolioVaccination,
		System::DateTime dateJaundiceVaccination,
		System::DateTime dateTuberculosisVaccination,
		System::DateTime dateEndMedicalClearance)
	{
		this->name = name;
		this->group = group;
		this->enrolmentDate = enrolmentDate;
		this->datePertussisVaccination = datePertussisVaccination;
		this->datePolioVaccination = datePolioVaccination;
		this->dateJaundiceVaccination = dateJaundiceVaccination;
		this->dateTuberculosisVaccination = dateTuberculosisVaccination;
		this->dateEndMedicalClearance = dateEndMedicalClearance;
	};

	KindergartenStudent(
		System::String^ name,
		System::String^ group,
		System::DateTime enrolmentDate,
		System::DateTime datePertussisVaccination,
		System::DateTime datePolioVaccination,
		System::DateTime dateJaundiceVaccination,
		System::DateTime dateTuberculosisVaccination,
		System::DateTime dateEndMedicalClearance)
	{
		this->name = name;
		this->group = stringToEnum(group);
		this->enrolmentDate = enrolmentDate.Date;
		this->datePertussisVaccination = datePertussisVaccination.Date;
		this->datePolioVaccination = datePolioVaccination.Date;
		this->dateJaundiceVaccination = dateJaundiceVaccination.Date;
		this->dateTuberculosisVaccination = dateTuberculosisVaccination.Date;
		this->dateEndMedicalClearance = dateEndMedicalClearance.Date;
	};

	KindergartenStudent(System::String^ line, char delimiterDate) {
		kindergartenStudentFromString(line, delimiterDate);
	}

	KindergartenStudent() {};

	void setName(System::String^ name) {
		this->name = name;
	}

	void setEnrolmentDate(System::DateTime enrolmentDate) {
		this->enrolmentDate = enrolmentDate;
	}

	void setDatePertussisVaccination(System::DateTime datePertussisVaccination) {
		this->datePertussisVaccination = datePertussisVaccination;
	}

	void setDatePolioVaccination(System::DateTime datePolioVaccination) {
		this->datePolioVaccination = datePolioVaccination;
	}

	void setDateJaundiceVaccination(System::DateTime dateJaundiceVaccination) {
		this->dateJaundiceVaccination = dateJaundiceVaccination;
	}

	void setDateTuberculosisVaccination(System::DateTime dateTuberculosisVaccination) {
		this->dateTuberculosisVaccination = dateTuberculosisVaccination;
	}

	void setGroup(Group group) {
		this->group = group;
	}

	void setDateEndMedicalClearance(System::DateTime dateEndMedicalClearance) {
		this->dateEndMedicalClearance = dateEndMedicalClearance;
	}

	System::String^ getName() {
		return this->name;
	}

	System::DateTime getEnrolmentDate() {
		return this->enrolmentDate;
	}

	System::DateTime getDatePertussisVaccination() {
		return this->datePertussisVaccination;
	}

	System::DateTime getDatePolioVaccination() {
		return this->datePolioVaccination;
	}

	System::DateTime getDateJaundiceVaccination() {
		return this->dateJaundiceVaccination;
	}

	System::DateTime getDateTuberculosisVaccination() {
		return this->dateTuberculosisVaccination;
	}

	Group getGroup() {
		return this->group;
	}

	System::DateTime getDateEndMedicalClearance() {
		return this->dateEndMedicalClearance;
	}

	System::String^ toString() {
		return name + ";" + enumGroupToString() + ";" + enrolmentDate.ToShortDateString() + ";" + datePertussisVaccination.ToShortDateString() + ";" +
			datePolioVaccination.ToShortDateString() + ";" + dateJaundiceVaccination.ToShortDateString() + ";" +
			dateTuberculosisVaccination.ToShortDateString() + ";" + dateEndMedicalClearance.ToShortDateString();
	}

	void kindergartenStudentFromString(System::String^ line, char delimiterDate) {
		System::String^ data;
		System::DateTime date;
		char delimer{ ';' };
		int switch_on = 0;
		for (int itr = 0; itr < line->Length; itr++) {
			if (line[itr] != delimer) {
				data += line[itr];
			}
			else {
				switch (switch_on)
				{
				case 0:
					this->name = data;
					switch_on++;
					data = data->Empty;
					break;
				case 1:
					this->group = stringToEnum(data);
					switch_on++;
					data = data->Empty;
					break;
				case 2:
					this->enrolmentDate = Date(data, delimiterDate);
					switch_on++;
					data = data->Empty;
					break;
				case 3:
					this->datePertussisVaccination = Date(data, delimiterDate);
					switch_on++;
					data = data->Empty;
					break;
				case 4:
					this->datePolioVaccination = Date(data, delimiterDate);
					switch_on++;
					data = data->Empty;
					break;
				case 5:
					this->dateJaundiceVaccination = Date(data, delimiterDate);
					switch_on++;
					data = data->Empty;
					break;
				case 6:
					this->dateTuberculosisVaccination = Date(data, delimiterDate);
					switch_on++;
					data = data->Empty;
					break;
				}
			}
		}
		this->dateEndMedicalClearance = Date(data, delimiterDate);
	}

	System::DateTime Date(System::String^ stringDate, char delimiter) {
		int day, month, year;
		std::string date;
		int switch_on = 0;
		for (int itr = 0; itr < stringDate->Length; itr++) {
			if (stringDate[itr] != delimiter) {
				date += stringDate[itr];
			}
			else {
				switch (switch_on)
				{
				case 0:
					day = std::stoi(date);
					switch_on++;
					date.clear();
					break;
				case 1:
					month = std::stoi(date);
					switch_on++;
					date.clear();
					break;
				}
			}
		}

		year = std::stoi(date);
		checkDate(day, month, year);

		System::DateTime dt = System::DateTime(year, month, day);

		return dt;
	}

	void checkDate(int day, int month, int year) {
		checkMonth(month);
		checkDay(day, month, year);
	}

	void checkMonth(int month) {
		if (month > 12 || month < 1) {
			std::string message = "Введен недопустимый месяц: " + std::to_string(month);
			throw LocalException(message);
		}
	}

	void checkDay(int day, int month, int year) {
		if (day < 1) {
			throw LocalException("Введен недопустимый день: " + std::to_string(day));
		}
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 8:
		case 10:
		case 12:
			if (day > 31) {
				throw LocalException("Введен недопустимый день: " + std::to_string(day));
			}
			break;
		case 2:
			if (year % 4 == 0 && year % 100 != 0) {
				if (day > 29) {
					throw LocalException("Введен недопустимый день: " + std::to_string(day));
				}
			}
			else {
				if (day > 28) {
					throw LocalException("Введен недопустимый день: " + std::to_string(day));
				}
			}
			break;
		default:
			if (day > 30) {
				throw LocalException("Введен недопустимый день: " + std::to_string(day));
			}
		}
	}

	System::String^ enumGroupToString() {
		switch (group)
		{
		case SENIOR:
			return "Старшая";
		case JUNIOR:
			return "Младшая";
		default:
			return "Неизвестная группа";
		}
	}

	Group stringToEnum(System::String^ str) {
		if (str->Equals("Старшая")) {
			return Group::SENIOR;
		}
		else if (str->Equals("Младшая")) {
			return Group::JUNIOR;
		}
		else {
			throw LocalException("Введена неизвестная группа");
		}
	}
};