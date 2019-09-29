#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <tchar.h>
#include <string>
#include <windows.system.threading.h>
#include "vector"
std::vector<int> HPVector;
void timer();
void esploop();
void trigger();
bool espbool = false;
bool triggerbool = false;
bool flashbool = false;
bool mapbool = false;
bool forgivmaster = false;
bool thirdp = false;
int fakelagbool = false ;
bool aimbotbool = false;
bool legit = false;
int triggedelay = 0;
int espdelay = 0;
int aimbotdist = 15;
int aimbotSnap = 2;
int lagdelay = 0;
int lagdelayjump = 0;
bool onjump = false;
int MaxEntities;
bool chicken = false;
bool shootonhead = false;
bool shortcuts = false;
std::string HpVals;
int bombtimer = 40;
bool starttimer = false;

bool bombglowbool = false;
bool weaponbool = false;

namespace SolaireHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{

	public:
		Main(void)
		{
			this->Name = L"-SolaireHub-";
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma region MyRegion




	private: System::Windows::Forms::Button^  trig;
	protected:
	private: System::Windows::Forms::Button^  map;
	private: System::Windows::Forms::Button^  flash;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  buttonmaster;
	private: System::Windows::Forms::Button^  espbtn;

	private: System::Windows::Forms::Button^  thirdpersonbtn;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  btnlag;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::CheckBox^  checkBox2;

	private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::RichTextBox^  bombtimerbox;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Timer^  timer2;
private: System::Windows::Forms::RichTextBox^  richTextBox2;
private: System::Windows::Forms::RichTextBox^  richTextBox3;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::RichTextBox^  richTextBox4;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::Label^  label86;



	private: System::ComponentModel::IContainer^  components;
	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma endregion
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->trig = (gcnew System::Windows::Forms::Button());
			this->map = (gcnew System::Windows::Forms::Button());
			this->flash = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonmaster = (gcnew System::Windows::Forms::Button());
			this->espbtn = (gcnew System::Windows::Forms::Button());
			this->thirdpersonbtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnlag = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->bombtimerbox = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// trig
			// 
			this->trig->Location = System::Drawing::Point(384, 39);
			this->trig->Name = L"trig";
			this->trig->Size = System::Drawing::Size(140, 26);
			this->trig->TabIndex = 0;
			this->trig->Text = L"Trigger Bot";
			this->trig->UseVisualStyleBackColor = true;
			this->trig->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// map
			// 
			this->map->Location = System::Drawing::Point(241, 72);
			this->map->Name = L"map";
			this->map->Size = System::Drawing::Size(125, 26);
			this->map->TabIndex = 1;
			this->map->Text = L"Mini Map";
			this->map->UseVisualStyleBackColor = true;
			this->map->Click += gcnew System::EventHandler(this, &Main::map_Click);
			// 
			// flash
			// 
			this->flash->Location = System::Drawing::Point(241, 39);
			this->flash->Name = L"flash";
			this->flash->Size = System::Drawing::Size(125, 27);
			this->flash->TabIndex = 2;
			this->flash->Text = L"Anti Flash";
			this->flash->UseVisualStyleBackColor = true;
			this->flash->Click += gcnew System::EventHandler(this, &Main::flash_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Main::timer1_Tick);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerReportsProgress = true;
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Main::backgroundWorker1_DoWork);
			this->backgroundWorker1->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &Main::backgroundWorker1_ProgressChanged);
			this->backgroundWorker1->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &Main::backgroundWorker1_RunWorkerCompleted);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(287, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Visual";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(426, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Game Play";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(200, 136);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Main::richTextBox1_TextChanged);
			// 
			// buttonmaster
			// 
			this->buttonmaster->Location = System::Drawing::Point(12, 170);
			this->buttonmaster->Name = L"buttonmaster";
			this->buttonmaster->Size = System::Drawing::Size(90, 34);
			this->buttonmaster->TabIndex = 6;
			this->buttonmaster->Text = L"Forgive me master";
			this->buttonmaster->UseVisualStyleBackColor = true;
			this->buttonmaster->Click += gcnew System::EventHandler(this, &Main::button1_Click_1);
			// 
			// espbtn
			// 
			this->espbtn->Location = System::Drawing::Point(241, 104);
			this->espbtn->Name = L"espbtn";
			this->espbtn->Size = System::Drawing::Size(125, 26);
			this->espbtn->TabIndex = 7;
			this->espbtn->Text = L"Walls";
			this->espbtn->UseVisualStyleBackColor = true;
			this->espbtn->Click += gcnew System::EventHandler(this, &Main::button1_Click_2);
			// 
			// thirdpersonbtn
			// 
			this->thirdpersonbtn->Location = System::Drawing::Point(540, 39);
			this->thirdpersonbtn->Name = L"thirdpersonbtn";
			this->thirdpersonbtn->Size = System::Drawing::Size(125, 26);
			this->thirdpersonbtn->TabIndex = 8;
			this->thirdpersonbtn->Text = L"3rd Person";
			this->thirdpersonbtn->UseVisualStyleBackColor = true;
			this->thirdpersonbtn->Click += gcnew System::EventHandler(this, &Main::button1_Click_3);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(592, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Misc";
			this->label3->Click += gcnew System::EventHandler(this, &Main::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(9, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Settings:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(-905, 207);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1585, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = resources->GetString(L"label6.Text");
			this->label6->Click += gcnew System::EventHandler(this, &Main::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(9, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Trigger Bot Delay(ms)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(454, 251);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"ESP tick rate delay(ms)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(132, 250);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(38, 20);
			this->textBox1->TabIndex = 17;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Main::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(576, 248);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(38, 20);
			this->textBox2->TabIndex = 18;
			this->textBox2->Text = L"0";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Main::textBox2_TextChanged);
			// 
			// btnlag
			// 
			this->btnlag->Location = System::Drawing::Point(540, 72);
			this->btnlag->Name = L"btnlag";
			this->btnlag->Size = System::Drawing::Size(125, 26);
			this->btnlag->TabIndex = 19;
			this->btnlag->Text = L"Lag Switch";
			this->btnlag->UseVisualStyleBackColor = true;
			this->btnlag->Click += gcnew System::EventHandler(this, &Main::button1_Click_4);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(234, 268);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Lag Switch Delay(ms)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(371, 265);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(38, 20);
			this->textBox3->TabIndex = 21;
			this->textBox3->Text = L"0";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Main::textBox3_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox1->Location = System::Drawing::Point(237, 304);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(94, 17);
			this->checkBox1->TabIndex = 22;
			this->checkBox1->Text = L"Jump Override";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Main::checkBox1_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(-444, 167);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(83, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"iyiyiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(176, 226);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(9, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"|";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(176, 239);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(9, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"|";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(176, 266);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(9, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"|";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label13->Location = System::Drawing::Point(176, 253);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(9, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"|";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label14->Location = System::Drawing::Point(176, 308);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(9, 13);
			this->label14->TabIndex = 31;
			this->label14->Text = L"|";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label15->Location = System::Drawing::Point(176, 295);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(9, 13);
			this->label15->TabIndex = 30;
			this->label15->Text = L"|";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label16->Location = System::Drawing::Point(176, 281);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(9, 13);
			this->label16->TabIndex = 29;
			this->label16->Text = L"|";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label17->Location = System::Drawing::Point(176, 268);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(9, 13);
			this->label17->TabIndex = 28;
			this->label17->Text = L"|";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label18->Location = System::Drawing::Point(176, 333);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(9, 13);
			this->label18->TabIndex = 35;
			this->label18->Text = L"|";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label19->Location = System::Drawing::Point(176, 320);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(9, 13);
			this->label19->TabIndex = 34;
			this->label19->Text = L"|";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label22->Location = System::Drawing::Point(439, 333);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(9, 13);
			this->label22->TabIndex = 44;
			this->label22->Text = L"|";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label23->Location = System::Drawing::Point(439, 320);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(9, 13);
			this->label23->TabIndex = 43;
			this->label23->Text = L"|";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label24->Location = System::Drawing::Point(439, 306);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(9, 13);
			this->label24->TabIndex = 42;
			this->label24->Text = L"|";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label25->Location = System::Drawing::Point(439, 293);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(9, 13);
			this->label25->TabIndex = 41;
			this->label25->Text = L"|";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label26->Location = System::Drawing::Point(439, 281);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(9, 13);
			this->label26->TabIndex = 40;
			this->label26->Text = L"|";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label27->Location = System::Drawing::Point(439, 268);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(9, 13);
			this->label27->TabIndex = 39;
			this->label27->Text = L"|";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label28->Location = System::Drawing::Point(439, 253);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(9, 13);
			this->label28->TabIndex = 38;
			this->label28->Text = L"|";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label29->Location = System::Drawing::Point(439, 239);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(9, 13);
			this->label29->TabIndex = 37;
			this->label29->Text = L"|";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label30->Location = System::Drawing::Point(439, 226);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(9, 13);
			this->label30->TabIndex = 36;
			this->label30->Text = L"|";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label20->Location = System::Drawing::Point(278, 226);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(86, 13);
			this->label20->TabIndex = 45;
			this->label20->Text = L"180 ms = optimal";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(371, 302);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(38, 20);
			this->textBox4->TabIndex = 46;
			this->textBox4->Text = L"180";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Main::textBox4_TextChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label21->Location = System::Drawing::Point(671, 112);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(9, 13);
			this->label21->TabIndex = 55;
			this->label21->Text = L"|";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label31->Location = System::Drawing::Point(671, 99);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(9, 13);
			this->label31->TabIndex = 54;
			this->label31->Text = L"|";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label32->Location = System::Drawing::Point(671, 85);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(9, 13);
			this->label32->TabIndex = 53;
			this->label32->Text = L"|";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label33->Location = System::Drawing::Point(671, 72);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(9, 13);
			this->label33->TabIndex = 52;
			this->label33->Text = L"|";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label34->Location = System::Drawing::Point(671, 60);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(9, 13);
			this->label34->TabIndex = 51;
			this->label34->Text = L"|";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label35->Location = System::Drawing::Point(671, 47);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(9, 13);
			this->label35->TabIndex = 50;
			this->label35->Text = L"|";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label36->Location = System::Drawing::Point(671, 32);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(9, 13);
			this->label36->TabIndex = 49;
			this->label36->Text = L"|";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label37->Location = System::Drawing::Point(671, 18);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(9, 13);
			this->label37->TabIndex = 48;
			this->label37->Text = L"|";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label38->Location = System::Drawing::Point(671, 5);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(9, 13);
			this->label38->TabIndex = 47;
			this->label38->Text = L"|";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label39->Location = System::Drawing::Point(671, 233);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(9, 13);
			this->label39->TabIndex = 64;
			this->label39->Text = L"|";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label40->Location = System::Drawing::Point(671, 220);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(9, 13);
			this->label40->TabIndex = 63;
			this->label40->Text = L"|";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label41->Location = System::Drawing::Point(671, 206);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(9, 13);
			this->label41->TabIndex = 62;
			this->label41->Text = L"|";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label42->Location = System::Drawing::Point(671, 193);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(9, 13);
			this->label42->TabIndex = 61;
			this->label42->Text = L"|";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label43->Location = System::Drawing::Point(671, 181);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(9, 13);
			this->label43->TabIndex = 60;
			this->label43->Text = L"|";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label44->Location = System::Drawing::Point(671, 168);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(9, 13);
			this->label44->TabIndex = 59;
			this->label44->Text = L"|";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label45->Location = System::Drawing::Point(671, 153);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(9, 13);
			this->label45->TabIndex = 58;
			this->label45->Text = L"|";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label46->Location = System::Drawing::Point(671, 139);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(9, 13);
			this->label46->TabIndex = 57;
			this->label46->Text = L"|";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label47->Location = System::Drawing::Point(671, 126);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(9, 13);
			this->label47->TabIndex = 56;
			this->label47->Text = L"|";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label48->Location = System::Drawing::Point(757, 355);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(9, 13);
			this->label48->TabIndex = 73;
			this->label48->Text = L"|";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label49->Location = System::Drawing::Point(757, 342);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(9, 13);
			this->label49->TabIndex = 72;
			this->label49->Text = L"|";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label50->Location = System::Drawing::Point(671, 328);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(9, 13);
			this->label50->TabIndex = 71;
			this->label50->Text = L"|";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label51->Location = System::Drawing::Point(671, 315);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(9, 13);
			this->label51->TabIndex = 70;
			this->label51->Text = L"|";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label52->Location = System::Drawing::Point(671, 303);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(9, 13);
			this->label52->TabIndex = 69;
			this->label52->Text = L"|";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label53->Location = System::Drawing::Point(671, 290);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(9, 13);
			this->label53->TabIndex = 68;
			this->label53->Text = L"|";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label54->Location = System::Drawing::Point(671, 275);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(9, 13);
			this->label54->TabIndex = 67;
			this->label54->Text = L"|";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label55->Location = System::Drawing::Point(671, 261);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(9, 13);
			this->label55->TabIndex = 66;
			this->label55->Text = L"|";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label56->Location = System::Drawing::Point(671, 248);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(9, 13);
			this->label56->TabIndex = 65;
			this->label56->Text = L"|";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox2->Location = System::Drawing::Point(457, 271);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(77, 17);
			this->checkBox2->TabIndex = 74;
			this->checkBox2->Text = L"Bomb ESP";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Main::checkBox2_CheckedChanged);
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label57->Location = System::Drawing::Point(780, 27);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(63, 13);
			this->label57->TabIndex = 76;
			this->label57->Text = L"Bomb Timer";
			// 
			// bombtimerbox
			// 
			this->bombtimerbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 70, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bombtimerbox->Location = System::Drawing::Point(753, 56);
			this->bombtimerbox->Name = L"bombtimerbox";
			this->bombtimerbox->ReadOnly = true;
			this->bombtimerbox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->bombtimerbox->Size = System::Drawing::Size(114, 114);
			this->bombtimerbox->TabIndex = 77;
			this->bombtimerbox->Text = L"40";
			this->bombtimerbox->TextChanged += gcnew System::EventHandler(this, &Main::bombtimerbox_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(742, 301);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 26);
			this->button1->TabIndex = 78;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click_5);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &Main::timer2_Tick);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(691, 215);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox2->Size = System::Drawing::Size(63, 55);
			this->richTextBox2->TabIndex = 79;
			this->richTextBox2->Text = L"30";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(869, 216);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox3->Size = System::Drawing::Size(62, 55);
			this->richTextBox3->TabIndex = 80;
			this->richTextBox3->Text = L"35";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label58->Location = System::Drawing::Point(700, 194);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(36, 13);
			this->label58->TabIndex = 81;
			this->label58->Text = L"No Kit";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label59->Location = System::Drawing::Point(878, 196);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(44, 13);
			this->label59->TabIndex = 82;
			this->label59->Text = L"With Kit";
			this->label59->Click += gcnew System::EventHandler(this, &Main::label59_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox3->Location = System::Drawing::Point(457, 311);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(84, 17);
			this->checkBox3->TabIndex = 83;
			this->checkBox3->Text = L"chicken esp\r\n";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Main::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox4->Location = System::Drawing::Point(457, 290);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(91, 17);
			this->checkBox4->TabIndex = 84;
			this->checkBox4->Text = L"Weapon ESP";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Main::checkBox4_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(122, 170);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 34);
			this->button2->TabIndex = 85;
			this->button2->Text = L"Never Vac";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(384, 71);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 26);
			this->button3->TabIndex = 86;
			this->button3->Text = L"AimBot";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label60->Location = System::Drawing::Point(9, 275);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(121, 13);
			this->label60->TabIndex = 87;
			this->label60->Text = L"Aim bot distance (5-150)";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(132, 271);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(38, 20);
			this->textBox5->TabIndex = 88;
			this->textBox5->Text = L"15";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Main::textBox5_TextChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox5->Location = System::Drawing::Point(12, 324);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(124, 17);
			this->checkBox5->TabIndex = 89;
			this->checkBox5->Text = L"ShootOnHead (beta)";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Main::checkBox5_CheckedChanged);
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label61->Location = System::Drawing::Point(9, 295);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(71, 13);
			this->label61->TabIndex = 90;
			this->label61->Text = L"Aim Bot Snap";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(132, 293);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(38, 20);
			this->textBox6->TabIndex = 91;
			this->textBox6->Text = L"2";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Main::textBox6_TextChanged);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(978, 56);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->ReadOnly = true;
			this->richTextBox4->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox4->Size = System::Drawing::Size(99, 278);
			this->richTextBox4->TabIndex = 92;
			this->richTextBox4->Text = L"";
			this->richTextBox4->TextChanged += gcnew System::EventHandler(this, &Main::richTextBox4_TextChanged);
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label62->Location = System::Drawing::Point(954, 5);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(9, 13);
			this->label62->TabIndex = 93;
			this->label62->Text = L"|";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label63->Location = System::Drawing::Point(954, 18);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(9, 13);
			this->label63->TabIndex = 94;
			this->label63->Text = L"|";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label64->Location = System::Drawing::Point(954, 45);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(9, 13);
			this->label64->TabIndex = 96;
			this->label64->Text = L"|";
			this->label64->Click += gcnew System::EventHandler(this, &Main::label64_Click);
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label65->Location = System::Drawing::Point(954, 32);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(9, 13);
			this->label65->TabIndex = 95;
			this->label65->Text = L"|";
			this->label65->Click += gcnew System::EventHandler(this, &Main::label65_Click);
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label66->Location = System::Drawing::Point(954, 69);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(9, 13);
			this->label66->TabIndex = 98;
			this->label66->Text = L"|";
			this->label66->Click += gcnew System::EventHandler(this, &Main::label66_Click);
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label67->Location = System::Drawing::Point(954, 56);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(9, 13);
			this->label67->TabIndex = 97;
			this->label67->Text = L"|";
			this->label67->Click += gcnew System::EventHandler(this, &Main::label67_Click);
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label68->Location = System::Drawing::Point(954, 146);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(9, 13);
			this->label68->TabIndex = 104;
			this->label68->Text = L"|";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label69->Location = System::Drawing::Point(954, 133);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(9, 13);
			this->label69->TabIndex = 103;
			this->label69->Text = L"|";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label70->Location = System::Drawing::Point(954, 122);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(9, 13);
			this->label70->TabIndex = 102;
			this->label70->Text = L"|";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label71->Location = System::Drawing::Point(954, 109);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(9, 13);
			this->label71->TabIndex = 101;
			this->label71->Text = L"|";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label72->Location = System::Drawing::Point(954, 95);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(9, 13);
			this->label72->TabIndex = 100;
			this->label72->Text = L"|";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label73->Location = System::Drawing::Point(954, 82);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(9, 13);
			this->label73->TabIndex = 99;
			this->label73->Text = L"|";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label74->Location = System::Drawing::Point(954, 223);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(9, 13);
			this->label74->TabIndex = 110;
			this->label74->Text = L"|";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label75->Location = System::Drawing::Point(954, 210);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(9, 13);
			this->label75->TabIndex = 109;
			this->label75->Text = L"|";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label76->Location = System::Drawing::Point(954, 199);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(9, 13);
			this->label76->TabIndex = 108;
			this->label76->Text = L"|";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label77->Location = System::Drawing::Point(954, 186);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(9, 13);
			this->label77->TabIndex = 107;
			this->label77->Text = L"|";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label78->Location = System::Drawing::Point(954, 172);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(9, 13);
			this->label78->TabIndex = 106;
			this->label78->Text = L"|";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label79->Location = System::Drawing::Point(954, 159);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(9, 13);
			this->label79->TabIndex = 105;
			this->label79->Text = L"|";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label80->Location = System::Drawing::Point(954, 300);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(9, 13);
			this->label80->TabIndex = 116;
			this->label80->Text = L"|";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label81->Location = System::Drawing::Point(954, 287);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(9, 13);
			this->label81->TabIndex = 115;
			this->label81->Text = L"|";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label82->Location = System::Drawing::Point(954, 276);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(9, 13);
			this->label82->TabIndex = 114;
			this->label82->Text = L"|";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label83->Location = System::Drawing::Point(954, 263);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(9, 13);
			this->label83->TabIndex = 113;
			this->label83->Text = L"|";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label84->Location = System::Drawing::Point(954, 249);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(9, 13);
			this->label84->TabIndex = 112;
			this->label84->Text = L"|";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label85->Location = System::Drawing::Point(954, 236);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(9, 13);
			this->label85->TabIndex = 111;
			this->label85->Text = L"|";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label87->Location = System::Drawing::Point(954, 325);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(9, 13);
			this->label87->TabIndex = 118;
			this->label87->Text = L"|";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label88->Location = System::Drawing::Point(954, 311);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(9, 13);
			this->label88->TabIndex = 117;
			this->label88->Text = L"|";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label86->Location = System::Drawing::Point(996, 27);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(54, 13);
			this->label86->TabIndex = 119;
			this->label86->Text = L"EnemyHP";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1089, 346);
			this->Controls->Add(this->label86);
			this->Controls->Add(this->label87);
			this->Controls->Add(this->label88);
			this->Controls->Add(this->label80);
			this->Controls->Add(this->label81);
			this->Controls->Add(this->label82);
			this->Controls->Add(this->label83);
			this->Controls->Add(this->label84);
			this->Controls->Add(this->label85);
			this->Controls->Add(this->label74);
			this->Controls->Add(this->label75);
			this->Controls->Add(this->label76);
			this->Controls->Add(this->label77);
			this->Controls->Add(this->label78);
			this->Controls->Add(this->label79);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->label72);
			this->Controls->Add(this->label73);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->bombtimerbox);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnlag);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->thirdpersonbtn);
			this->Controls->Add(this->espbtn);
			this->Controls->Add(this->buttonmaster);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flash);
			this->Controls->Add(this->map);
			this->Controls->Add(this->trig);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main";
			this->Text = L"-SolaireHub-";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			if (starttimer == true)
			{
				bombtimerbox->BackColor = Color::Red;

				bombtimer -= 1;


				if (bombtimer <= -10)
				{
					this->bombtimerbox->BackColor = Color::White;
					starttimer = false;
					bombtimer = 40;
				}
				
			}
			
				
				richTextBox4->Text = gcnew String(HpVals.c_str());
			
			
	
				
			
			

			bombtimerbox->Text = bombtimer.ToString();
			richTextBox2->Text = (bombtimer - 10).ToString();
			richTextBox3->Text = (bombtimer - 5).ToString();
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				
		if (triggerbool == true)
		{
			this->trig->BackColor = Color::White;

			triggerbool = false;
		}
		else
		{
			this->trig->BackColor = Color::Green;
			triggerbool = true;
		}
	}
			 private: System::Void map_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (mapbool == true)
				 {
					 		this->map->BackColor = Color::White;

					 mapbool = false;
				 }
				 else
				 {
					 		this->map->BackColor = Color::Green;
					 mapbool = true;
				 }
			 }
					  private: System::Void flash_Click(System::Object^  sender, System::EventArgs^  e) {
						  if (flashbool == true)
						  {
							  this->flash->BackColor = Color::White;

							  flashbool = false;
						  }
						  else
						  {
							  this->flash->BackColor = Color::Green;
							  flashbool = true;
						  }
					  }			 
	private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {
		backgroundWorker1->RunWorkerAsync(1);

	}
	private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
		while (true)
		{
			trigger();
		}		
	}
private: System::Void backgroundWorker1_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
}
private: System::Void backgroundWorker1_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (forgivmaster == true)
	{
		this->buttonmaster->BackColor = Color::White;
		this->flash->BackColor = Color::White;
		this->map->BackColor = Color::White;
		this->trig->BackColor = Color::White;
		this->espbtn->BackColor = Color::White;
		this->btnlag->BackColor = Color::White;
		this->button3->BackColor = Color::White; //aimbot
		triggerbool = false;
		flashbool = false;
		mapbool = false;
		forgivmaster = false;
		espbool = false;
		fakelagbool = false;
		aimbotbool = false;
	}
	else
	{
		this->buttonmaster->BackColor = Color::Green;
		this->flash->BackColor = Color::Green;
		this->map->BackColor = Color::Green;
		this->trig->BackColor = Color::Green;
		this->espbtn->BackColor = Color::Green;
		this->btnlag->BackColor = Color::Green;
		this->button3->BackColor = Color::Green; //aimbot
		forgivmaster = true;
		triggerbool = true;
		flashbool = true;
		mapbool = true;
		espbool = true;
		fakelagbool = true;
		aimbotbool = true;
	}
}
private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
	if (espbool == true)
	{
		this->espbtn->BackColor = Color::White;

		espbool = false;
	}
	else
	{
		this->espbtn->BackColor = Color::Green;
		espbool = true;
	}
}
private: System::Void backgroundWorker2_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {


}
private: System::Void button1_Click_3(System::Object^  sender, System::EventArgs^  e) {
	if (thirdp == true)
	{
		this->thirdpersonbtn->BackColor = Color::White;

		thirdp = false;
	}
	else
	{
		this->thirdpersonbtn->BackColor = Color::Green;
		thirdp = true;
	}
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		triggedelay = Convert::ToInt32(textBox1->Text);

	}
	catch (...)
	{

	}
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		espdelay = Convert::ToInt32(textBox2->Text);
	}
	catch (...)
	{

	}
}
private: System::Void button1_Click_4(System::Object^  sender, System::EventArgs^  e) {
	if (fakelagbool == true)
	{
		this->btnlag->BackColor = Color::White;

		fakelagbool =false;
	}
	else
	{
		this->btnlag->BackColor = Color::Green;
		fakelagbool = true;
	}	
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	try
	{
		lagdelay = Convert::ToInt32(textBox3->Text);
	}

	catch (...)
	{

	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked)
	{
		onjump = true;
	}
	else
	{
		onjump = false;
	}
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		lagdelayjump = Convert::ToInt32(textBox4->Text);
	}
	catch (...)
	{
	}
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bombtimerbox_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button1_Click_5(System::Object^  sender, System::EventArgs^  e) {
	this ->bombtimerbox->BackColor = Color::White;
	 bombtimer = 40;
	 starttimer = false;
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox2->Checked == true)
	{
		bombglowbool = true;
	}
	if (checkBox2->Checked == false)
	{
		bombglowbool = false;
	}
}
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	 timer();
}
private: System::Void label59_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox3->Checked == true)
	{
		chicken = true;
	}
	else
	{
		chicken = false;
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox4->Checked == true)
	{
		weaponbool = true;
	}
	else if (checkBox4->Checked == false)
	{
		weaponbool = false;
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	if (legit == true)
	{
		this->button2->BackColor = Color::White;

		legit = false;
		checkBox2->Checked = false;
		checkBox4->Checked = false;

		this->button2->BackColor = Color::White;
		this->flash->BackColor = Color::White;
		this->map->BackColor = Color::White;

		flashbool = false;
		mapbool = false;
		weaponbool = false;
		bombglowbool = false;
	}
	else
	{
		this->button2->BackColor = Color::Green;
		this->flash->BackColor = Color::Green;
		this->map->BackColor = Color::Green;

		checkBox2->Checked = true;
		checkBox4->Checked = true;


		flashbool = true;
		mapbool = true;
		weaponbool = true;
		bombglowbool = true;


		legit = true;
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (aimbotbool == true)
	{
		this->button3->BackColor = Color::White;

		aimbotbool = false;
	}
	else
	{
		this->button3->BackColor = Color::Green;
		aimbotbool = true;
	}
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	aimbotdist = Convert::ToInt32(textBox5->Text);
}
private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox5->Checked == true)
	{
		shootonhead = true;
	}
	else
	{
		shootonhead = true;
	}
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	aimbotSnap = Convert::ToInt32(textBox6->Text);
}
private: System::Void richTextBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label65_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label66_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label64_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label67_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
class Offsets 
{
public:
	struct GlowStruct 
	{
		float red = 0.f;
		float green = 1.f;
		float blue = 1.f;
		float alpha = 1.f;
		byte Padd[8]; 
		float buffer3 = 1.f;
		int buffer4 = 0;
		bool on = true;
	};
	struct GlowStruct2 
	{
		float red = 1.f;
		float green = 1.f;
		float blue = 0.f;
		float alpha = 1.f;
		byte Padd[8]; 
		float buffer3 = 1.f;
		int buffer4 = 0;
		bool on = true;
	};
};


class CHackProcess
{
public:

	DWORD dwBase;
	PROCESSENTRY32 __gameProcess;
	HANDLE __HandleProcess;
	HWND __HWNDCss;
	DWORD __dwordClient;
	DWORD __dwordEngine;
	DWORD __dwordOverlay;
	DWORD __dwordVGui;
	DWORD __dwordLibCef;
	DWORD __dwordSteam;
	DWORD FindProcessName(const char *__ProcessName, PROCESSENTRY32 *pEntry)
	{
		PROCESSENTRY32 __ProcessEntry;
		__ProcessEntry.dwSize = sizeof(PROCESSENTRY32);
		HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
		if (hSnapshot == INVALID_HANDLE_VALUE) return 0;        if (!Process32First(hSnapshot, &__ProcessEntry))
		{
			CloseHandle(hSnapshot);
			return 0;
		}
		do {
			if (!_strcmpi(__ProcessEntry.szExeFile, __ProcessName))
			{
				memcpy((void *)pEntry, (void *)&__ProcessEntry, sizeof(PROCESSENTRY32));
				CloseHandle(hSnapshot);
				return __ProcessEntry.th32ProcessID;
			}
		} while (Process32Next(hSnapshot, &__ProcessEntry));
		CloseHandle(hSnapshot);
		return 0;
	}
	DWORD getThreadByProcess(DWORD __DwordProcess)
	{
		float kCGUSEWBWe = 81804823842120; kCGUSEWBWe = 7629324868523; if (kCGUSEWBWe = 80979813902406) kCGUSEWBWe = 68208183946328; kCGUSEWBWe = 65600624927171; kCGUSEWBWe = 49271716560062;
		if (kCGUSEWBWe = 94594966820818)kCGUSEWBWe = 3902406423882; kCGUSEWBWe = 15488941181376;
		if (kCGUSEWBWe = 15216012162913)kCGUSEWBWe = 3902406423882; kCGUSEWBWe = 15488941181376;
		if (kCGUSEWBWe = 15216012162913)kCGUSEWBWe = 3902406423882; kCGUSEWBWe = 15488941181376;
		if (kCGUSEWBWe = 15216012162913)kCGUSEWBWe = 3902406423882; kCGUSEWBWe = 15488941181376;
		if (kCGUSEWBWe = 15216012162913)kCGUSEWBWe = 3902406423882; kCGUSEWBWe = 15488941181376; kCGUSEWBWe = 5928514146398;
		THREADENTRY32 __ThreadEntry;
		__ThreadEntry.dwSize = sizeof(THREADENTRY32);
		HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
		if (hSnapshot == INVALID_HANDLE_VALUE) return 0;

		if (!Thread32First(hSnapshot, &__ThreadEntry)) { CloseHandle(hSnapshot); return 0; }

		do {
			if (__ThreadEntry.th32OwnerProcessID == __DwordProcess)
			{
				CloseHandle(hSnapshot);
				return __ThreadEntry.th32ThreadID;
			}
		} while (Thread32Next(hSnapshot, &__ThreadEntry));
		CloseHandle(hSnapshot);
		return 0;
	}

	DWORD GetModuleNamePointer(LPSTR LPSTRModuleName, DWORD __DwordProcessId)
	{
		float jwGjYEAxLh = 7614665178244; jwGjYEAxLh = 7519146746553; if (jwGjYEAxLh = 24352328890816) jwGjYEAxLh = 78798236800940; jwGjYEAxLh = 96403704414273; jwGjYEAxLh = 44142739640370;
		if (jwGjYEAxLh = 3373907879823)jwGjYEAxLh = 88908161320066; jwGjYEAxLh = 70625222587271;
		if (jwGjYEAxLh = 963585357959)jwGjYEAxLh = 88908161320066; jwGjYEAxLh = 70625222587271;
		if (jwGjYEAxLh = 963585357959)jwGjYEAxLh = 88908161320066; jwGjYEAxLh = 70625222587271;
		if (jwGjYEAxLh = 963585357959)jwGjYEAxLh = 88908161320066; jwGjYEAxLh = 70625222587271;
		if (jwGjYEAxLh = 963585357959)jwGjYEAxLh = 88908161320066; jwGjYEAxLh = 70625222587271; jwGjYEAxLh = 62440927624957;

		MODULEENTRY32 lpModuleEntry = { 0 };
		HANDLE hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, __DwordProcessId);
		if (!hSnapShot)
			return NULL;
		lpModuleEntry.dwSize = sizeof(lpModuleEntry);
		BOOL __RunModule = Module32First(hSnapShot, &lpModuleEntry);
		while (__RunModule)
		{
			if (!strcmp(lpModuleEntry.szModule, LPSTRModuleName))
			{
				CloseHandle(hSnapShot);
				return (DWORD)lpModuleEntry.modBaseAddr;
			}
			__RunModule = Module32Next(hSnapShot, &lpModuleEntry);
		}
		CloseHandle(hSnapShot);
		return NULL;

	}


	void runSetDebugPrivs()
	{
		float lIAmLEhFrw = 9117919105187; lIAmLEhFrw = 20074814945222; if (lIAmLEhFrw = 10489021599821) lIAmLEhFrw = 12066954917307; lIAmLEhFrw = 43057523980139; lIAmLEhFrw = 39801394305752;
		if (lIAmLEhFrw = 42848831206695)lIAmLEhFrw = 15998214972665; lIAmLEhFrw = 22685231625030;
		if (lIAmLEhFrw = 73830228001503)lIAmLEhFrw = 15998214972665; lIAmLEhFrw = 22685231625030;
		if (lIAmLEhFrw = 73830228001503)lIAmLEhFrw = 15998214972665; lIAmLEhFrw = 22685231625030;
		if (lIAmLEhFrw = 73830228001503)lIAmLEhFrw = 15998214972665; lIAmLEhFrw = 22685231625030;
		if (lIAmLEhFrw = 73830228001503)lIAmLEhFrw = 15998214972665; lIAmLEhFrw = 22685231625030; lIAmLEhFrw = 60924757940649;
		HANDLE __HandleProcess = GetCurrentProcess(), __HandleToken;
		TOKEN_PRIVILEGES priv;
		LUID __LUID;
		OpenProcessToken(__HandleProcess, TOKEN_ADJUST_PRIVILEGES, &__HandleToken);
		LookupPrivilegeValue(0, "seDebugPrivilege", &__LUID);
		priv.PrivilegeCount = 1;
		priv.Privileges[0].Luid = __LUID;
		priv.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
		AdjustTokenPrivileges(__HandleToken, false, &priv, 0, 0, 0);
		CloseHandle(__HandleToken);
		CloseHandle(__HandleProcess);
	}

	void RunProcess()
	{
		float UdXspiyAAE = 89240189189571; UdXspiyAAE = 69246582748718; if (UdXspiyAAE = 81857981249226) UdXspiyAAE = 18587747478426; UdXspiyAAE = 99020078283902; UdXspiyAAE = 82839029902007;
		if (UdXspiyAAE = 17241141858774)UdXspiyAAE = 12492261555029; UdXspiyAAE = 22436695526496;
		if (UdXspiyAAE = 29479113248976)UdXspiyAAE = 12492261555029; UdXspiyAAE = 22436695526496;
		if (UdXspiyAAE = 29479113248976)UdXspiyAAE = 12492261555029; UdXspiyAAE = 22436695526496;
		if (UdXspiyAAE = 29479113248976)UdXspiyAAE = 12492261555029; UdXspiyAAE = 22436695526496;
		if (UdXspiyAAE = 29479113248976)UdXspiyAAE = 12492261555029; UdXspiyAAE = 22436695526496; UdXspiyAAE = 4287023021568;
		std::string test = "client_panorama.dll";
		std::string test2 = "engine.dll";
		std::string test3 = "vguimatsurface.dll";
		std::string test5 = "Counter-Strike: Global Offensive";
		//commented lines are for non steam versions of the game
		runSetDebugPrivs();
		while (!FindProcessName("csgo.exe", &__gameProcess)) Sleep(12);		//change based on game
		while (!(getThreadByProcess(__gameProcess.th32ProcessID))) Sleep(12);
		__HandleProcess = OpenProcess(PROCESS_ALL_ACCESS, false, __gameProcess.th32ProcessID);
		while (__dwordClient == 0x0)	__dwordClient = GetModuleNamePointer((LPSTR)test.c_str(), __gameProcess.th32ProcessID);
		while (__dwordEngine == 0x0) __dwordEngine = GetModuleNamePointer((LPSTR)test2.c_str(), __gameProcess.th32ProcessID);
		while (__dwordVGui == 0x0) __dwordVGui = GetModuleNamePointer((LPSTR)test3.c_str(), __gameProcess.th32ProcessID);
		if (__HWNDCss = FindWindow(NULL, (LPSTR)test5.c_str()))
		{
			//OutputDebugStringW(L"My output string.");
		}//change for game 
		
	}
};

extern CHackProcess fProcess;