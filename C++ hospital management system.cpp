#include <iostream>
#include <stdlib.h>

using namespace std;



class patients {
	public:
	int phone_number;
	int id_number;
	int height;
	int weight;
	int diastole;
	int choise;
	string test;
	string lab_findings;
	string systole;
	string report;
	string blood_presure;
	string temperature;
	string kin_phone;
	string age;
	string patient_number;
	string first_name;
	string second_name;
	string surname;
	string back_history;
	void personal_registration(){
	system("color A0");		
	cout <<"					HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"					==========================\n";
	cout <<"				  PATIENT PERSONAL DETAILS REGISTRATION\n\n";
	
	cout <<"				Enter patient number			:";
	cin >>patient_number;	
	cout <<"				Enter patient first name		:";
	cin >>first_name;
	cout <<"				Enter patient second name		:";
	cin >>second_name;
	cout <<"				Enter patient surname			:";
	cin >>surname;
	cout <<"				Enter patient phone number		:";
	cin >>phone_number;
	cout <<"				Enter patient kin phone no		:";
	cin >>kin_phone;
	cout <<"				Enter patient age			:";
	cin >>age;
	cout <<"				Enter patient ID numbet			:";
	cin >>id_number;
	cout <<"				Enter patient background history	:";
	cin >>back_history;
	
	}
	void bio_registration(){
	system("color A0");		
	cout <<"					HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"					==========================\n";
	cout <<"				  PATIENT BIO DETAILS REGISTRATION\n\n";
	
	
	cout <<"				Enter patient weight			:";
	cin >>weight;	
	cout <<"				Enter patient height			:";
	cin >>height;
	cout <<"				Enter patient diastole			:";
	cin >>diastole;
	cout <<"				Enter patient systole			:";
	cin >>systole;
	cout <<"				Enter patient temperatures		:";
	cin >>temperature;
	cout <<"				Enter patient blood presure		:";
	cin >>blood_presure;
	cout <<"				Enter patient health report		:";
	cin >>report;			
	}
	void lab_request(){
	system("color A0");		
	cout <<"					HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"					==========================\n";
	cout <<"				  	  PATIENT LABORATORY TEST\n\n";	
	
	cout <<"					Enter test conducted	:";
	cin >>test;	
	cout <<"					Enter test findings	:";
	cin >>lab_findings;

		
	}
	};
	
class facility :public patients{
	public:
	string medicine;
	string dosage;
	string word;
	string bed;
	void medication(){
	system("color A0");		
	cout <<"					HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"					==========================\n";
	cout <<"				  	   PATIENT MEDICATION\n\n";
	cout <<"					Enter a list medicine name		 :";
	cin >>medicine;	
	cout <<"					Enter medicine dosage respectively	:";
	cin >>dosage;		
	}
	void bed_allocation(){
	system("color A0");		
	cout <<"					HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"					==========================\n";
	cout <<"				  	  PATIENT BED ALLOCATION\n\n";
	
	cout <<"					Enter the word number		:";
	cin >>word;	
	cout <<"					Enter the bed number		:";
	cin >>bed;			
	}
};


class accaunt : public facility{
	public:
	int total,paid;
	void payment(){
	system("color A0");		
	cout <<"					HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"					==========================\n";
	cout <<"				  	    PATIENT BILLING\n\n";	
	
	cout <<"				Enter the total patient bill		:";
	cin >>total;	
	cout <<"				Enter the amaunt paid by patient	:";
	cin >>paid;		
	
	if(total == paid){
	cout <<"				The patient has been succesfully cleared.\n\n";	
	system("cls");
	cout <<"					HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"					==========================\n";
	cout <<"				Thank you for you patients, we wish you quick recovery.\n\n";		
	}
	else if(paid > total){
	cout <<"				Extrer amaunt has been paid by the patient.\n\n";			
	}
	else{
	cout <<"				The patient has to clear full amaunt to be cleared!.";		
	}
	}
	
};

class doctors: public accaunt {
	public:
	int phone_number,id_number,choise,num;
	string first_name,second_name,surname,username,password,con_password,doctor_number;
	void create_accaunt(){
	system("color A0");		
	cout <<"					HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"					==========================\n";
	cout <<"					   CREATE AN ACCAUNT\n\n";
	cout <<"					Enter your username or Email	:";
	cin >>username;
	cout <<"					Enter your password		:";
	cin >>password;
	cout <<"					Confirm your password		:";
	cin >>con_password;
	
	int choise;
	
	if(password == con_password){
	cout <<"					Accaunt created succesful!\n\n";
	cout <<"					Do you want to log in to your accaunt:\n ";	
	cout <<"					1.YES!\n";
	cout <<"					2.NO\n";
	cout <<"					Choise: ";
	cin >> choise;
	
	if(choise == 1){
	system("cls");		
	doctors peter;
	peter.login();					
	}
	else if(choise == 2){
	system("cls");	
	cout <<"					Thankyou and welcome once again:";		
	}
	else{
	system("cls");	
	cout <<"					Your choise was invalid:";	
	}
	}
	else{
	cout <<"					The password you entered does not match, try again";	
	}
	}
	string login_pass,login_user;
	void login(){
	system("color A0");	
	doctors peter;
	username = peter.password;
	password = peter.password;	
	
			
	cout <<"					HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"					==========================\n";
	cout <<"					         LOGIN\n\n";
	cout <<"					Enter your username or Email		:";
	cin >>login_user;
	cout <<"					Enter your password			:";
	cin >>login_pass;
	if(login_pass == password || login_user != username){
		
	cout <<"					Login was succesfull!\n";	


	cout <<"					Register patient.\n ";	
	cout <<"					1.YES!\n";
	cout <<"					2.NO\n";
	cout <<"					Choise: ";
	cin >> choise;		
	switch(choise){
	case 1:
	system("cls");
	doctors peter;
	peter.personal_registration();	
	cout<<"\n";
	cout <<"				Register patient bio.\n ";	
	cout <<"				1.YES!\n";
	cout <<"				2.NO\n";
	cout <<"				Choise: ";
	cin >> choise;
	switch(choise){
	case 1:
	system("cls");
	doctors peter;
	peter.bio_registration();
	system("color A0");		
	cout<<"\n";
	cout <<"				1.Register patient lab results\n";
	cout <<"				2.Bill the patient\n";
	cout <<"				3.Send the patient to word\n";	
	cout <<"				3.Send the patient to phamacy\n";	
	cout <<"				Choise: ";	
	cin >>choise;
	if(choise == 1){
	system("cls");
	doctors peter;
	peter.lab_request();
	cout<<"\n";
	cout <<"					1.Bill the patient\n";
	cout <<"					2.Send the patient to word\n";	
	cout <<"					3.Send the patient to phamacy\n";
	cout <<"					4.Go back\n";	
	cout <<"					5.Home\n";
	cout <<"					Choise: ";	
	cin >>choise;	
	if(choise == 1){
	system("cls");
	doctors peter;
	peter.payment();		
	}
	else if(choise == 2){
	system("cls");
	doctors peter;
	peter.bed_allocation();	

	cout<<"\n";
	cout <<"					1.Bill the patient\n";
	cout <<"					2.Send the patient to phamacy\n";
	cout <<"					3.Go back\n";	
	cout <<"					4.Home\n";
	cout <<"					Choise: ";	
	cin >>choise;	
	
	if(choise == 1){
	system("cls");
	doctors peter;
	peter.payment();			
	}
	else if(choise == 2){
	system("cls");
	doctors peter;
	peter.medication();	
	//
	
	cout<<"\n";
	cout <<"					1.Bill the patient\n";
	cout <<"					2.Go back\n";	
	cout <<"					3.Home\n";
	cout <<"					Choise: ";	
	cin >>choise;		
	if(choise == 1){
	system("cls");
	doctors peter;
	peter.payment();			
	}
	else if(choise == 2){
	system("cls");
	doctors peter;
	peter.bed_allocation();		
	}	
	else if(choise == 3){
	system("cls");
	doctors peter;
	peter.login();		
	}	
	else{
	cout<<"						Inavalid choise";	
	}		
	
	//   	
	}
	else if(choise == 3){
	system("cls");
	doctors peter;
	peter.bed_allocation();		
	}
	else if(choise == 4){
	system("cls");
	doctors peter;
	peter.login();		
	}
	else{
	cout<<"						Inavalid choise";	
	}	
	
			
	}//lab -> word ->
	else if(choise == 3){
	system("cls");
	doctors peter;
	peter.medication();		
	}	
	else if(choise == 4){
	system("cls");
	doctors peter;
	peter.bio_registration();		
	}
	else if(choise == 5){
	system("cls");
	doctors peter;
	peter.login();	
	}
	else{
	cout<<"						Inavalid choise";	
	}
	}	//lab
	else if(choise == 2){
	system("cls");
	doctors peter;
	peter.payment();
	cout<<"\n";
	cout <<"					1.Go back\n";	
	cout <<"					2.Home\n";
	cout <<"					Choise: ";	
	cin >>choise;		
	if(choise == 4){
	system("cls");
	doctors peter;
	peter.bio_registration();		
	}
	else if(choise == 5){
	system("cls");
	doctors peter;
	peter.login();	
	}	
	else{
	cout<<"						Inavalid choise";	
	}	
			
	}//billing
	else if(choise == 3){
	system("cls");
	doctors peter;
	peter.bed_allocation();	
	
	cout<<"\n";
	cout <<"					1.Release the patient\n";	
	cout <<"					2.Send the patient to phamacy\n";
	cout <<"					3.Go back\n";	
	cout <<"					4.Home\n";
	cout <<"					Choise: ";	
	cin >>choise;	
	if(choise == 1){
	system("cls");
	doctors peter;
	peter.payment();		
	}
	else if(choise == 2){
	system("cls");
	doctors peter;
	peter.medication();		
	}	
	else if(choise == 3){
	system("cls");
	doctors peter;
	peter.bio_registration();		
	}
	else if(choise == 4){
	system("cls");
	doctors peter;
	peter.login();	
	}
	else{
	cout<<"						Inavalid choise";	
	}	
	
		
	}//word allocation
	else if(choise == 4){
	
	system("cls");
	doctors peter;
	peter.medication();	
	
	
	cout<<"\n";
	cout <<"					1.Bill the patient\n";
	cout <<"					2.Go back\n";	
	cout <<"					3.Home\n";
	cout <<"					Choise: ";	
	cin >>choise;	
	if(choise == 1){
	system("cls");
	doctors peter;
	peter.payment();		
	}	
	else if(choise == 2){
	system("cls");
	doctors peter;
	peter.bio_registration();		
	}
	else if(choise == 3){
	system("cls");
	doctors peter;
	peter.login();	
	}
	else{
	cout<<"						Inavalid choise";	
	}
	
	
			
	}//phamacy
	
	
	
		break;
	}
		break;
		
	}
	}
	}
};


class terms :public doctors{
	public:
	int choise;
	void terms_and_condition(){
	system("color A0");	
	cout <<"						HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"						==========================\n";
	cout <<"						TERMS AND CONDITION OF USE\n\n";
	cout <<"				To use this system, the user must be a member of\n";	
	cout <<"				the organisation.ie the user already has an accaunt.\n\n";
	cout <<"				The system only allows single words, any two or more\n";
	cout <<"				words should be separated by the use of an underscore\n";
	cout <<"				ie. any white space will cause the system to fail and terminate\n\n";

	
	cout <<"				1.I have read the terms and service of use and agread.\n";	
	cout <<"				2.I desagree with the terms and service of use.\n\n";
	cout <<"				choise: ";	
	cin >>choise;
	
	if(choise == 1){
	system("cls");
	doctors peter;
	peter. login();	
	}
	else if(choise == 2){
	system("cls");
	cout <<"					HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"					==========================\n";
	cout <<"     						Thank you!!"	;	
	}	
	else{
	system("cls");
	cout <<"					HOSPITAL MANAGEMENT SYSTEM\n";
	cout <<"					==========================\n";
	cout <<"     						Invalid choise!!\n\n\n"	;	
	
	cout <<"					1.Try again\n";
	cout <<"					2.Exit\n";

	cin >>choise;
	if(choise == 1){
	terms peter;
	peter.terms_and_condition()	;
	}
	else{
	system("cls");	
	}
	}				
	}
};
	
	


int main(){
	terms peter;
	peter. terms_and_condition();
	
	return 0;
}