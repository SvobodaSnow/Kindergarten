#include "pch.h"
#include "Form1.h"

System::Void CppCLRWinFormsProject::Form1::ñîõðàíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		listKindergartenStudent.saveToFile();
	}
	catch (System::Exception^ ex) {
		saveToFile();
	}
}

System::Void CppCLRWinFormsProject::Form1::ñîõðàíèòüÊàêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveToFile();
}

System::Void CppCLRWinFormsProject::Form1::îòêðûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		openFileDialog1->ShowDialog();
		listKindergartenStudent.loadFromFile(openFileDialog1->FileName);
	}
	catch (LocalException ex) {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("Äàííûå íå ñîõðàíåííû!\nÑîõðàíèòü ïåðåä îòêðûòèåì íîâîãî ôàéëà?", "Âíèìàíèå!", 
			MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
		if (dr == System::Windows::Forms::DialogResult::Yes) {
			listKindergartenStudent.saveToFile();
			listKindergartenStudent.loadFromFile(openFileDialog1->FileName);
		}
		else if (dr == System::Windows::Forms::DialogResult::No) {
			listKindergartenStudent.loadForceFromFile(openFileDialog1->FileName);
		}
	}
}

System::Void CppCLRWinFormsProject::Form1::Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	if (!listKindergartenStudent.isSaved()) {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("Äàííûå íå ñîõðàíåííû!\nÑîõðàíèòü?", "Âíèìàíèå!",
			MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
		switch (dr)
		{
		case System::Windows::Forms::DialogResult::Cancel:
			e->Cancel = true;
			break;
		case System::Windows::Forms::DialogResult::Yes:
			try {
				listKindergartenStudent.saveToFile();
			}
			catch (System::Exception^ ex) {
				saveToFile();
			}
			break;
		}
	}
}

System::Void CppCLRWinFormsProject::Form1::saveToFile()
{
	try {
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog1->ShowDialog();
		listKindergartenStudent.saveAsFile(saveFileDialog1->FileName);
	}
	catch (System::Exception^ ex) {

	}
}

System::Void CppCLRWinFormsProject::Form1::âûâåñòèÄàòóÈÂðåìÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->label9->Text = System::DateTime().UtcNow.ToString();
}

System::Void CppCLRWinFormsProject::Form1::äîáàâèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->listKindergartenStudent.addNewKindergarten
	(
		gcnew KindergartenStudent
		(
			this->textBox1->Text,
			this->comboBox1->Text,
			this->dateTimePicker1->Value,
			this->dateTimePicker3->Value,
			this->dateTimePicker4->Value,
			this->dateTimePicker5->Value,
			this->dateTimePicker6->Value,
			this->dateTimePicker2->Value
		)
	);
}

System::Void CppCLRWinFormsProject::Form1::óäàëèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	listKindergartenStudent.expellingKindergarten(this->textBox1->Text);
}

System::Void CppCLRWinFormsProject::Form1::íàéòèÂîñïèòàííèêàÏîÔÈÎToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	KindergartenStudent^ ks = listKindergartenStudent.getKindergartenByName(this->textBox1->Text);
	if (ks)
	{
		this->listView1->Items->Clear();

		printKindergartenStudent(ks);
	}
	else {
		MessageBox::Show("Âîñïèòàííèê íå íàéäåí!", "Âíèìàíèå!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

System::Void CppCLRWinFormsProject::Form1::ïåðåâåñòèÂÑòàðøóþÃðóïïóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		listKindergartenStudent.moveKindergartenInSeniorGroup(this->textBox1->Text);
	}
	catch (LocalException ex) {
		if (MessageBox::Show(
			"\tÑî äíÿ çà÷èñëåíèÿ íå ïðîøåë ãîä! \n Âû óâåðåíû, ÷òî õîòèòå ïåðåâåñòè â ñòàðøóþ ãðóïïó?",
			"Âíèìàíèå!",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
		{
			listKindergartenStudent.moveForceKindergartenInSeniorGroup(this->textBox1->Text);
		}
	}
}

System::Void CppCLRWinFormsProject::Form1::âûâåñòèÂñåõÂîñïèòàííèêîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->listView1->Items->Clear();

	for each (System::Object ^ var in listKindergartenStudent.getAllKindergarten())
	{
		printKindergartenStudent((KindergartenStudent^)var);
	}
}

System::Void CppCLRWinFormsProject::Form1::èçÌëàäøåéÃðóïïûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->listView1->Items->Clear();

	for each (System::Object ^ var in listKindergartenStudent.getAllKiddergartenInJuniorGroup())
	{
		printKindergartenStudent((KindergartenStudent^)var);
	}
}

System::Void CppCLRWinFormsProject::Form1::èçÑòàðøåéÃðóïïûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->listView1->Items->Clear();

	for each (System::Object ^ var in listKindergartenStudent.getAllKiddergartenInSeniorGroup())
	{
		printKindergartenStudent((KindergartenStudent^)var);
	}
}

System::Void CppCLRWinFormsProject::Form1::êîêëþøToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->listView1->Items->Clear();

	for each (System::Object ^ var in listKindergartenStudent.getKindergartenNeedPertussisVaccination())
	{
		printKindergartenStudent((KindergartenStudent^)var);
	}
}

System::Void CppCLRWinFormsProject::Form1::ïàëåîìåëèòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->listView1->Items->Clear();

	for each (System::Object ^ var in listKindergartenStudent.getKindergartenNeedPolioVaccination())
	{
		printKindergartenStudent((KindergartenStudent^)var);
	}
}

System::Void CppCLRWinFormsProject::Form1::æåëòóõàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->listView1->Items->Clear();

	for each (System::Object ^ var in listKindergartenStudent.getKindergartenNeedJaundiceVaccination())
	{
		printKindergartenStudent((KindergartenStudent^)var);
	}
}

System::Void CppCLRWinFormsProject::Form1::òóáåðêóëåçToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->listView1->Items->Clear();

	for each (System::Object ^ var in listKindergartenStudent.getKindergartenNeedTuberculosisVaccination())
	{
		printKindergartenStudent((KindergartenStudent^)var);
	}
}

System::Void CppCLRWinFormsProject::Form1::êîêëþøàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	listKindergartenStudent.changeDatePertussisVaccination(this->textBox1->Text, this->dateTimePicker3->Value);
}

System::Void CppCLRWinFormsProject::Form1::ïàëåîìåëèòToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
	listKindergartenStudent.changeDatePolioVaccination(this->textBox1->Text, this->dateTimePicker3->Value);
}

System::Void CppCLRWinFormsProject::Form1::æåëòóõèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	listKindergartenStudent.changeDateJaundiceVaccination(this->textBox1->Text, this->dateTimePicker3->Value);
}

System::Void CppCLRWinFormsProject::Form1::òóáåðêóëåçàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	listKindergartenStudent.changeDateTuberculosisVaccination(this->textBox1->Text, this->dateTimePicker3->Value);
}

System::Void CppCLRWinFormsProject::Form1::ìåäîòâîäàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	listKindergartenStudent.changeDateEndMedicalClearance(this->textBox1->Text, this->dateTimePicker2->Value);
}

System::Void CppCLRWinFormsProject::Form1::listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	for each (System::Windows::Forms::ListViewItem ^ var in this->listView1->SelectedItems)
	{
		KindergartenStudent^ ks = listKindergartenStudent.getKindergartenByName(var->Text);
		this->textBox1->Text = ks->getName();
		this->comboBox1->Text = ks->enumGroupToString();
		this->dateTimePicker1->Value = ks->getEnrolmentDate();
		this->dateTimePicker2->Value = ks->getDateEndMedicalClearance();
		this->dateTimePicker3->Value = ks->getDatePertussisVaccination();
		this->dateTimePicker4->Value = ks->getDatePolioVaccination();
		this->dateTimePicker5->Value = ks->getDateJaundiceVaccination();
		this->dateTimePicker6->Value = ks->getDateTuberculosisVaccination();
		break;
	}
}

System::Void CppCLRWinFormsProject::Form1::èçìåíüòüÂñåÄàòûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	listKindergartenStudent.changeAllDate(
		this->textBox1->Text,
		this->dateTimePicker3->Value,
		this->dateTimePicker4->Value,
		this->dateTimePicker5->Value,
		this->dateTimePicker6->Value,
		this->dateTimePicker2->Value
	);
}

System::Void CppCLRWinFormsProject::Form1::printKindergartenStudent(KindergartenStudent^ kindergartenStudent)
{
	System::Windows::Forms::ListViewItem^ lvi = this->listView1->Items->Add(kindergartenStudent->getName());
	lvi->SubItems->Add(kindergartenStudent->enumGroupToString());
	lvi->SubItems->Add(kindergartenStudent->getEnrolmentDate().ToShortDateString());
	lvi->SubItems->Add(kindergartenStudent->getDatePertussisVaccination().ToShortDateString());
	lvi->SubItems->Add(kindergartenStudent->getDatePolioVaccination().ToShortDateString());
	lvi->SubItems->Add(kindergartenStudent->getDateJaundiceVaccination().ToShortDateString());
	lvi->SubItems->Add(kindergartenStudent->getDateTuberculosisVaccination().ToShortDateString());
	lvi->SubItems->Add(kindergartenStudent->getDateEndMedicalClearance().ToShortDateString());
}