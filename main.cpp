#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

void get_data(int i, int choice); //This function used to obtain data from end-user.
void add_student(); //This function is used to add record of new student.
void delete_student(int idnumber); //This function is used to delete existing record.
void show_data(int searchkey); //This function used to show data to end-user.
void search_student(int searchkey); //This function is used to search existing record.
void update_student(int idnumber); //This function is used to edit existing record.
void grade(); //This function used to calculate grade.
void gpa(int idnumber); //This function used to calculate GPA.
void course_fee(); //This function used to display course fees.
void displayTable(); //This function used to display course details.

void payment(int choice, int idnumber, char courseID, string name); //This function used to handle payments.
int tn; //int variable used to determine the number of students.

struct student{  //Structure student is made to store student attributes.
  int id;
  string name;
  string nic;
  string dob;
  int phone;
  string address;
  string gen;
  string course;
};

student rec [20];  //This is basic array of defined structure to store data.
int choice; //int variable used to determine which operation user want to do.

int main(){

    int searchkey; //int variable to store student ID by which user can search.
    int idnumber; //int variable used to record ID number which user want to update.
	string name; //int variable used to record Student name.
	char courseID; //int variable used to record Course ID number.

    //Allow user to enter the number of students wish to add.
    cout<<"\tEnter The Total Number of Students [Max 20] : ";
    cin>>tn;

    do {
        std::cout<<R"(
         _ _ _  ___  _     __   _   _   _  ___
        | | | || __|| |   / _| / \ | \_/ || __|
        | V V || _| | |_ ( (_ ( o )| \_/ || _|
         \_n_/ |___||___| \__| \_/ |_| |_||___|
        )"<<std::endl;
        cout<<"\t=======================================\n";
        cout<<"\t       STUDENT MANAGEMENT SYSTEM       \n";
        cout<<"\t=======================================\n";
        cout<<endl;
        cout<<"\t";
        cout<<"Project Title      ";
        cout<<":";
        cout<<"   Student Management System \n";
        cout<<"\t";
        cout<<"Purpose            ";
        cout<<":";
        cout<<"   Manage the Student Information \n\n";
        cout<<"\t";
        cout<<"Developers         ";
        cout<<":";
        cout<<"   Buddhi Rangana [ITBSC/2023/EA/WE/001] \n";
        cout<<"\t\t\t       Rumesh Dhananjaya [ITBSC/2023/EA/WE/005] \n";
        cout<<"\t\t\t       Malindu Sandaruwan [ITBSC/2023/EA/WE/015] \n";
        cout<<"\t\t\t       Malaka Mithila [ITBSC/2023/EA/WE/020] \n";
        cout<<"\t\t\t       Ishara Pramudith [ITBSC/2023/EA/WE/028] \n";
        cout<<"\t\t\t       Ashinka Shanshini [ITBSC/2023/EA/WE/032] \n\n";
        cout<<"\t";
        cout<<"Components         ";
        cout<<":";
        cout<<"   1. Student Registration \n";
        cout<<"\t\t\t       2. Marks Calculation \n";
        cout<<"\t\t\t       3. Payment Management \n";
        cout<<"\t\t\t       4. Exit \n\n";
        cout<<"\t=======================================\n\n";
        cout<<"\t";
        cout<<"Choose Options [1/2/3/4] : "; //Making choice.
        cin>>choice;
        cout<<endl;

        switch (choice){
            case 1: //If user presses 1 then student registration module would be displayed.
                cout<<"\t";
                cout<<"Additional Details about the Component 1 \n\n";
                cout<<"\t";
                cout<<"Component         ";
                cout<<":";
                cout<<"   Student Registration \n";
                cout<<"\t";
                cout<<"Developers        ";
                cout<<":";
                cout<<"   Buddhi Rangana \n";
                cout<<"\t\t\t      Ashinka Shanshini \n\n";
                cout<<"\t";
                cout<<"Tasks             ";
                cout<<":";
                cout<<"   1. Enter New Records \n";
                cout<<"\t\t\t      2. Modify Records \n";
                cout<<"\t\t\t      3. Delete Records \n";
                cout<<"\t\t\t      4. Search and View Records \n";
                cout<<"\t\t\t      5. Exit \n\n";
                cout<<"\t";
                cout<<"Choose Options [1/2/3/4/5] : "; //Making choice.
                cin>>choice;
                cout<<endl;

                if(choice==1){
                    add_student();
                }else if(choice==2){
                    if(rec[0].id==0){
                        cout<<"\t";
                        cout<<"Please Add Students First.\n";
                        cout<<endl;
                        cout<<"\t";
                        system("pause");
                        cout<<endl;
                        main();
                    }else{
                        cout<<endl;
                        cout<<"\t";
                        cout<<"================================================================================\n";
                        cout<<"\t";
                        cout<<"                             STUDENT RECORD TABLE                               \n";
                        cout<<"\t";
                        cout<<"================================================================================\n";
                        cout<<"\t";
                        cout<<"ID\tName     "<<"NIC\tDOB     "<<"Phone no.\tAddress     "<<"Gender\tCourse     \n";
                        cout<<"\t";
                        cout<<"--------------------------------------------------------------------------------\n";

                        for(int i=0;i<=tn;i++){
                            cout<<endl;
                            cout<<"\t";
                            show_data(i); //This function is called with index value to show data.
                        }
                        cout<<"\t";
                        cout<<"--------------------------------------------------------------------------------\n";
                        cout<<endl;
                        cout<<"\t";
                        cout<<"Which ID number your want to edit: "; //Asking the user at which ID he wants to make a change.
                        cin>>idnumber;
                        cout<<endl;

                        if(idnumber>tn || idnumber<0){
                            cout<<"\t";
                            cout<<"Invalid ID Number.\n";
                        }else{
                            update_student(idnumber); //Passing ID number to Edit Function.
                        }
                    }
                }else if(choice==3){
                    if(rec[0].id==0){
                        cout<<"\t";
                        cout<<"Please Add Students First.\n";
                        cout<<endl;
                        cout<<"\t";
                        system("pause");
                        cout<<endl;
                        main();
                    }else{
                        cout<<endl;
                        cout<<"\t";
                        cout<<"================================================================================\n";
                        cout<<"\t";
                        cout<<"                             STUDENT RECORD TABLE                               \n";
                        cout<<"\t";
                        cout<<"================================================================================\n";
                        cout<<"\t";
                        cout<<"ID\tName     "<<"NIC\tDOB     "<<"Phone no.\tAddress     "<<"Gender\tCourse     \n";
                        cout<<"\t";
                        cout<<"--------------------------------------------------------------------------------\n";

                        for(int i=0;i<=tn;i++){
                            cout<<endl;
                            cout<<"\t";
                            show_data(i); //This function is called with index value to show data.
                        }
                        cout<<"\t";
                        cout<<"--------------------------------------------------------------------------------\n";
                        cout<<endl;
                        cout<<"\t";
                        cout<<"Enter the ID that you want to delete: "; //Asking the user at which ID he wants to delete.
                        cin>>idnumber;
                        cout<<endl;

                        if(idnumber>tn || idnumber<0){
                            cout<<"\t";
                            cout<<"Invalid ID Number.\n";
                        }else{
                            delete_student(idnumber); //Passing ID number to Edit Function.
                        }
                    }
                }else if(choice==4){
                    if(rec[0].id==0){
                        cout<<"\t";
                        cout<<"Please Add Students First.\n";
                        cout<<endl;
                        cout<<"\t";
                        system("pause");
                        cout<<endl;
                        main();
                    }else{
                        cout<<"\t";
                        cout<<"Enter ID of student you want to search: ";
                        cin>>searchkey; //ID as the search key can be entered by user.
                        cout<<endl;

                        if(idnumber>tn || idnumber<0){
                            cout<<"\t";
                            cout<<"Invalid ID Number.\n";
                        }else{
                            search_student(searchkey);
                        }
                    }
                }else if(choice==5){
                    cout<<"\t";
                    cout<<"Exiting Component.\n";
                    cout<<endl;
                    main();
                }
                else{
                    cout<<"\t";
                    cout<<"Invalid choice. Please enter a valid option.\n";
                    cout<<endl;
                    cout<<"\t";
                    system("pause");
                    cout<<endl;
                    main();
                }
                break;
            case 2: //If user presses 2 then marks calculation module would be displayed.
                cout<<"\t";
                cout<<"Additional Details about the Component 2 \n\n";
                cout<<"\t";
                cout<<"Component         ";
                cout<<":";
                cout<<"   Marks Calculation \n";
                cout<<"\t";
                cout<<"Developers        ";
                cout<<":";
                cout<<"   Rumesh Dhananjaya \n";
                cout<<"\t\t\t      Malaka Mithila \n\n";
                cout<<"\t";
                cout<<"Tasks             ";
                cout<<":";
                cout<<"   1. Grade Calculation \n";
                cout<<"\t\t\t      2. GPA Calculation \n";
                cout<<"\t\t\t      3. Exit \n\n";
                cout<<"\t";
                cout<<"Choose Options [1/2/3] : "; //Making choice.
                cin>>choice;
                cout<<endl;

                if(choice==1){
                    cout<<"\tEnter Student ID: ";
                    cin>>idnumber;
                    cout<<endl;
                    grade();
                    cout<<"\t";
                    system("pause");
                    cout<<endl;
                    main(); //Return to main function to again show menu.
                }else if(choice==2){
                    cout<<"\tEnter Student ID: ";
                    cin>>idnumber;
                    gpa(idnumber);
                    cout<<"\t";
                    system("pause");
                    cout<<endl;
                    main(); //Return to main function to again show menu.
                }else if(choice==3){
                    cout<<"\t";
                    cout<<"Exiting Component.\n";
                    cout<<endl;
                    main();
                }else{
                    cout<<"\t";
                    cout<<"Invalid choice. Please enter a valid option.\n";
                    cout<<endl;
                    cout<<"\t";
                    system("pause");
                    cout<<endl;
                    main(); //Return to main function to again show menu.
                }
                break;
            case 3: //If user presses 3 then payment management module would be displayed.
                cout<<"\t";
                cout<<"Additional Details about the Component 3 \n\n";
                cout<<"\t";
                cout<<"Component         ";
                cout<<":";
                cout<<"   Payment Management \n";
                cout<<"\t";
                cout<<"Developers        ";
                cout<<":";
                cout<<"   Malindu Sandaruwan \n";
                cout<<"\t\t\t      Ishara Pramudith \n\n";
                cout<<"\t";
                cout<<"Tasks             ";
                cout<<":";
                cout<<"   1. View Course Fees \n";
                cout<<"\t\t\t      2. Make Payment \n";
                cout<<"\t\t\t      3. Exit \n\n";
                cout<<"\t";
                cout<<"Choose Options [1/2/3] : "; //Making choice.
                cin>>choice;
                cout<<endl;

                if(choice==1){
                    course_fee();
                    cout<<"\t";
                    system("pause");
                    cout<<endl;
                    main(); //Return to main function to again show menu.
                }else if(choice==2){
                    cout<<"\tPlease Enter Student ID: ";
                    cin>>searchkey;

                    cout<<endl;

                    if(idnumber>tn || idnumber<0){
                        cout<<"\t";
                        cout<<"Invalid ID Number.\n";
                        cout<<endl;
                        cout<<"\t";
                        system("pause");
                        cout<<endl;
                        main(); //Return to main function to again show menu.
                    }else{
                        int i = searchkey;
                        cout<<"\tHi! "<<rec[i].name<<endl<<endl;

                        course_fee();
    					cout<<"\tEnter the Course ID that You want to pay [A,B,C,D] : ";
    					cin>>courseID;
    					cout<<endl;

    					switch(courseID){
    						case 'A':
   							case 'a':
                            	cout<<"\tBachelor of Science (Hons) in IT = LKR 1,350,000 \n\n";
                            	payment(choice, idnumber, courseID, name);
                            	break;
    						case 'B':
   							case 'b':
                            	cout<<"\tDiploma in Information Technology = LKR 50,000 \n\n";
                            	payment(choice, idnumber, courseID, name);
                            	break;
    						case 'C':
   							case 'c':
                            	cout<<"\tDiploma in Multimedia = LKR 50,000 \n\n";
                            	payment(choice, idnumber, courseID, name);
                            	break;
							case 'D':
   							case 'd':
                            	cout<<"\tDiploma in Web Application Development = LKR 50,000 \n\n";
                            	payment(choice, idnumber, courseID, name);
                            	break;
    						default:
                            	cout<<"\tInvalid Course ID. Please enter a valid ID.\n";
                            	cout<<endl;
                            	cout<<"\t";
                            	system("pause");
                            	cout<<endl;
                            	main(); //Return to main function to again show menu.
                        }
					}
                }else if(choice==3){
                    cout<<"\t";
                    cout<<"Exiting Component.\n";
                    cout<<endl;
                    main();
                }else{
                    cout<<"\t";
                    cout<<"Invalid choice. Please enter a valid option.\n";
                    cout<<endl;
                    cout<<"\t";
                    system("pause");
                    cout<<endl;
                    main(); //Return to main function to again show menu.
                }
                break;
            case 4: //If user presses 4 then exit the program.
                cout<<"\t";
                cout<<"Exiting Program. Goodbye!\n";
                return 0;
                break;
            default: //Default value for invalid input.
                cout<<"\t";
                cout<<"Invalid choice. Please enter a valid option.\n";
                cout<<endl;
                cout<<"\t";
                system("pause");
                cout<<endl;
                main(); //Return to main function to again show menu.
        }
    } while(--tn);

    return 0;
}

//Function for receiving data from user and populating the variables with values.
void get_data(int i, int choice){

  cout<<"\t";
  cout<<"Enter Student ID Number in Format (1XXX): ";
  cin>>rec[i].id;
  cout<<"\t";
  cout<<"Enter Student's Name: ";
  cin>>rec[i].name;
  cout<<"\t";
  cout<<"Enter Student's NIC: ";
  cin>>rec[i].nic;

  if(rec[i].nic.length()==10||rec[i].nic.length()==12){
    cout<<"\t";
    cout<<"Enter Student's Date of Birth (DD/MM/YYYY): ";
    cin>>rec[i].dob;
    cout<<"\t";
    cout<<"Enter Student's Phone Number: ";
    cin>>rec[i].phone;

    string digit = to_string(rec[i].phone);

    if(digit.length()==10){
        cout<<"\t";
        cout<<"Enter Student's Address: ";
        cin>>rec[i].address;
        cout<<"\t";
        cout<<"Enter Student's Gender: ";
        cin>>rec[i].gen;
        cout<<endl;
        cout<<"\t";
        cout<<"Please Select Course: ";

        cout<<"1. Bachelor of Science (Hons) in IT \n";
        cout<<"\t\t\t      2. Diploma in Information Technology \n";
        cout<<"\t\t\t      3. Diploma in Multimedia \n";
        cout<<"\t\t\t      4. Diploma in Web Application Development \n";
        cout<<endl;
        cout<<"\t";
        cout<<"Choose Options [1/2/3/4] : "; //Making choice.
        cin>>choice;
        cout<<endl;

        if(choice==1){
            rec[i].course = "Bachelor of Science (Hons) in IT";
        }else if(choice==2){
            rec[i].course = "Diploma in Information Technology";
        }else if(choice==3){
            rec[i].course = "Diploma in Multimedia";
        }else if(choice==4){
            rec[i].course = "Diploma in Web Application Development";
        }else{
            cout<<endl;
            cout<<"\tInvalid choice. Please enter a valid option.\n";
            cout<<endl;
            cout<<"\t";
            system("pause");
            cout<<endl;
            main(); //Return to main function to again show menu.
        }

        cout<<"\t";
        cout<<"========================================================================================================\n";
        cout<<"\t";
        cout<<"                                         STUDENT RECORD TABLE                               \n";
        cout<<"\t";
        cout<<"========================================================================================================\n";
        cout<<"\t";
        cout<<"ID\tName     "<<"NIC\tDOB     "<<"Phone no.\tAddress     "<<"Gender\tCourse     \n";
        cout<<"\t";
        cout<<"--------------------------------------------------------------------------------------------------------\n";

        for(int i=0;i<tn;i++){
            cout<<endl;
            cout<<"\t";
            show_data(i); //Loop was processed for 5 times to show obtained records.
        }

        cout<<"\t";
        cout<<"========================================================================================================\n";
        cout<<"\t";
        cout<<"                                                FINISH                                      \n";
        cout<<"\t";
        cout<<"========================================================================================================\n";
        cout<<endl;
        cout<<"\t";
        system("pause");

        cout<<endl;
        main(); //Return to main function to again show menu.
    }else{
        cout<<endl;
        cout<<"\tInvalid Phone number. Please enter a valid number.\n";
        cout<<endl;
        cout<<"\t";
        system("pause");
        cout<<endl;
        main(); //Return to main function to again show menu.
    }
 }else{
    cout<<endl;
    cout<<"\tInvalid NIC number. Please enter a valid NIC.\n";
    cout<<endl;
    cout<<"\t";
    system("pause");
    cout<<endl;
    main(); //Return to main function to again show menu.
 }
}

//Function for showing data on the screen.
void show_data(int searchkey){
  int i = searchkey;
  cout<<rec[i].id<<"   ";
  cout<<rec[i].name<<"     ";
  cout<<rec[i].nic<<"   ";
  cout<<rec[i].dob<<"   ";
  cout<<rec[i].phone<<"   ";
  cout<<rec[i].address<<"   ";
  cout<<rec[i].gen<<"   ";
  cout<<rec[i].course<<"\n\n";
}

//This function is used to add record of new student.
void add_student(){
  for(int i=0;i<tn;i++){
    get_data(i, choice); //Loop was processed 5 times to get input for 5 students.
  }

}

//This function is used to search record.
void search_student(int searchkey){
  for(int i=0;i<=tn;i++){
   if(rec[i].id==searchkey){ //If roll number matches to search term.
    cout<<"\t";
    cout<<"ID\tName     "<<"NIC\tDOB     "<<"Phone no.\tAddress     "<<"Gender\tCourse     \n\n";
    cout<<endl;
    cout<<"\t";
    show_data(i); //A function is used inside another function.
   }
  }
}

//This function is used to update existing record.
void update_student(int idnumber){
  for(int i=0;i<=tn;i++){
   if(idnumber==i){ //Through loop every value is compared with search term.
    cout<<"\t";
    cout<<"Existed information about this record.\n\n";
    cout<<"\t";
    cout<<"--------------------------------------------------------------------------------\n";
    cout<<"\t";
    cout<<"ID\tName     "<<"NIC\tDOB     "<<"Phone no.\tAddress     "<<"Gender\tCourse     \n\n";
    cout<<"\t";
    cout<<"--------------------------------------------------------------------------------\n";
    cout<<endl;
    cout<<"\t";
    show_data(i); //Load information for existing record.
    cout<<"\t";
    cout<<"Enter new data for above shown record.\n\n";
    get_data(i, choice); //Inputing data for that specific record.
    cout<<"\t";
    cout<<"Record Updated Successfully.\n";
    cout<<endl;
    cout<<"\t";
    system("pause");

    cout<<endl;
    main(); //Return to main function.
   }
  }
}

//This function is used to delete existing record.
void delete_student(int idnumber){
  int found=0,i;
  for(int i=0; i<tn; i++){
        if(rec[i].id==idnumber){
            for(int j=i; j<(tn-1); j++){
                rec[j] = rec[j+1];
            }
            found++;
            i--;
            tn--;
        }
   }
  if(idnumber==i){ //Through loop every value is compared with search term.
    cout<<"\t";
    cout<<"Existed information about this record.\n\n";
    cout<<"\t";
    cout<<"--------------------------------------------------------------------------------\n";
    cout<<"\t";
    cout<<"ID\tName     "<<"NIC\tDOB     "<<"Phone no.\tAddress     "<<"Gender\tCourse     \n\n";
    cout<<"\t";
    cout<<"--------------------------------------------------------------------------------\n";
    cout<<endl;
    cout<<"\t";
    show_data(i); //Load information for existing record.
    cout<<"\t";
    cout<<"Delete data in above shown record.\n\n";
    get_data(i, choice); //Inputing data for that specific record.
    cout<<endl;
    cout<<"\t";
    system("pause");
    cout<<endl;
    main(); //Return to main function.
  }else if(found==0){
    cout<<"\t";
    cout<<"ID doesn't found in the Record.\n";
  }else{
    cout<<"\t";
    cout<<"Record Deleted Successfully.\n";
  }
}

//This function used to display course details.
void displayTable() {
    cout << "\t====================================================================================================================================\n";
    cout << "\t                                  Courses, Academic Year, Semester Code & Subject Names             								   \n";
    cout << "\t====================================================================================================================================\n";
    cout << "\t |   Bachelor of Science (Hons) in IT   |   1 Year   |   Semester 01 Code: IT101  | Subject: Programming, Database, Networking      |\n";
    cout << "\t |   Bachelor of Science (Hons) in IT   |   1 Year   |   Semester 02 Code: IT102  | Subject: Web Development, Data Structures       |\n";
    cout << "\t |   Bachelor of Science (Hons) in IT   |   2 Year   |   Semester 01 Code: MM001  | Subject: Graphics, Animation, Multimedia Design |\n";
    cout << "\t |   Bachelor of Science (Hons) in IT   |   2 Year   |   Semester 02 Code: MM002  | Subject: Web Design, JavaScript, Frameworks     |\n";
    cout << "\t |   Bachelor of Science (Hons) in IT   |   3 Year   |   Semester 01 Code: EN101  | Subject: Programming, Database, Networking      |\n";
    cout << "\t |   Bachelor of Science (Hons) in IT   |   3 Year   |   Semester 02 Code: EN102  | Subject: Web Development, Data Structures       |\n";
    cout << "\t |   Bachelor of Science (Hons) in IT   |   4 Year   |   Semester 01 Code: EN001  | Subject: Graphics, Animation, Multimedia Design |\n";
    cout << "\t |   Bachelor of Science (Hons) in IT   |   4 Year   |   Semester 02 Code: EN002  | Subject: Web Design, JavaScript, Frameworks     |\n";
    cout << "\t====================================================================================================================================\n";
    cout << "\t====================================================================================================================================\n";
    cout << endl;
}

//This function used to calculate grade.
void grade() {
    char choose;
    cout << "\t===============================================\n";
    cout << "\t              Courses & Course ID              \n";
    cout << "\t===============================================\n";
    cout << "\t|   Bachelor of Science (Hons) in IT  |  'A'  |\n";
    cout << "\t|   Diploma in Information Technology |  'B'  |\n";
    cout << "\t|   Diploma in Multimedia             |  'C'  |\n";
    cout << "\t|   Diploma in Web Application Dev    |  'D'  |\n";
    cout << "\t===============================================\n";
    cout << endl;
    cout << "\tChoose your Course ID (A, B, C, D): ";
    cin >> choose;
    cout << endl;

    if (choose == 'A' || choose == 'a') {
        int chose_1;
        displayTable();
        cout << "\tEnter your SEM ID: ";
        cin >> chose_1;
        cout << endl;

        if ((chose_1 >= 1 && chose_1 <= 8) && ((chose_1 % 2 == 1 && chose_1 <= 7) || (chose_1 % 2 == 0 && chose_1 <= 8))) {
            string subjects[8];
            int marks[8];
            char grade[8];

            switch (chose_1) {
                case 1:
                    subjects[0] = "Programming";
                    subjects[1] = "Database";
                    subjects[2] = "Networking";
                    subjects[3] = "Web Development";
                    subjects[4] = "Data Structures";
                    subjects[5] = "Graphics";
                    subjects[6] = "Animation";
                    subjects[7] = "Multimedia Design";
                    break;
                case 2:
                    subjects[0] = "Web Development";
                    subjects[1] = "Data Structures";
                    subjects[2] = "Graphics";
                    subjects[3] = "Animation";
                    subjects[4] = "Web Design";
                    subjects[5] = "JavaScript";
                    subjects[6] = "Frameworks";
                    subjects[7] = "Advanced Multimedia";
                    break;
                case 3:
                    subjects[0] = "Programming";
                    subjects[1] = "Database";
                    subjects[2] = "Networking";
                    subjects[3] = "Web Development";
                    subjects[4] = "Data Structures";
                    subjects[5] = "Graphics";
                    subjects[6] = "Animation";
                    subjects[7] = "Multimedia Design";
                    break;
                case 4:
                    subjects[0] = "Web Development";
                    subjects[1] = "Data Structures";
                    subjects[2] = "Graphics";
                    subjects[3] = "Animation";
                    subjects[4] = "Web Design";
                    subjects[5] = "JavaScript";
                    subjects[6] = "Frameworks";
                    subjects[7] = "Advanced Multimedia";
                    break;
                case 5:
                    subjects[0] = "Programming";
                    subjects[1] = "Database";
                    subjects[2] = "Networking";
                    subjects[3] = "Web Development";
                    subjects[4] = "Data Structures";
                    subjects[5] = "Graphics";
                    subjects[6] = "Animation";
                    subjects[7] = "Multimedia Design";
                    break;
                case 6:
                    subjects[0] = "Web Development";
                    subjects[1] = "Data Structures";
                    subjects[2] = "Graphics";
                    subjects[3] = "Animation";
                    subjects[4] = "Web Design";
                    subjects[5] = "JavaScript";
                    subjects[6] = "Frameworks";
                    subjects[7] = "Advanced Multimedia";
                    break;
                case 7:
                    subjects[0] = "Programming";
                    subjects[1] = "Database";
                    subjects[2] = "Networking";
                    subjects[3] = "Web Development";
                    subjects[4] = "Data Structures";
                    subjects[5] = "Graphics";
                    subjects[6] = "Animation";
                    subjects[7] = "Multimedia Design";
                    break;
                case 8:
                    subjects[0] = "Web Development";
                    subjects[1] = "Data Structures";
                    subjects[2] = "Graphics";
                    subjects[3] = "Animation";
                    subjects[4] = "Web Design";
                    subjects[5] = "JavaScript";
                    subjects[6] = "Frameworks";
                    subjects[7] = "Advanced Multimedia";
                    break;
                default:
                    cout << "\tInvalid Semester Code. Please enter a valid Semester Code.\n";
                    cout<<endl;
                    cout<<"\t";
                    system("pause");
                    cout<<endl;
                    main(); //Return to main function to again show menu.
            }

            for (int i = 0; i < 8; ++i) {
                cout << "\tEnter Marks for " << subjects[i] << ": ";
                cin >> marks[i];
                cout << endl;

                if (marks[i] >= 85 && marks[i] <= 100) {
                    grade[i] = 'A';
                } else if (marks[i] >= 70 && marks[i] < 85) {
                    grade[i] = 'B';
                } else if (marks[i] >= 60 && marks[i] < 70) {
                    grade[i] = 'C';
                } else if (marks[i] >= 55 && marks[i] < 60) {
                    grade[i] = 'D';
                } else if (marks[i] >= 50 && marks[i] < 55) {
                    grade[i] = 'E';
                } else if (marks[i] >= 0 && marks[i] < 50) {
                    grade[i] = 'F';
                } else {
                    cout << "\tInvalid marks for " << subjects[i] << endl;
                    cout<<endl;
                    cout<<"\t";
                    system("pause");
                    cout<<endl;
                    main(); //Return to main function to again show menu.
                }
            }

            cout << "\t=====================================\n";
            cout << "\t             Grade Report            \n";
            cout << "\t=====================================\n";
            cout << "\tSubject\t\tMarks\tGrade\n";
            cout << endl;

            for (int i = 0; i < 8; ++i) {
                cout << "\t" << subjects[i] << "\t\t" << marks[i] << "\t" << grade[i] << endl;
            }
        } else {
            cout << "\tInvalid Semester Code. Please enter a valid Semester Code.\n";
            cout<<endl;
            cout<<"\t";
            system("pause");
            cout<<endl;
            main(); //Return to main function to again show menu.
        }
    } else if (choose == 'B' || choose == 'b') {
        // Subject list for course B
        string subjects[] = {"DBMS", "INS", "Hardware and Computer Fundamentals"};
        int marks[3];
        char grade[3];

        for (int i = 0; i < 3; ++i) {
            cout << "\tEnter Marks for " << subjects[i] << ": ";
            cin >> marks[i];
            cout << endl;

            if (marks[i] >= 85 && marks[i] <= 100) {
                grade[i] = 'A';
            } else if (marks[i] >= 70 && marks[i] < 85) {
                grade[i] = 'B';
            } else if (marks[i] >= 60 && marks[i] < 70) {
                grade[i] = 'C';
            } else if (marks[i] >= 55 && marks[i] < 60) {
                grade[i] = 'D';
            } else if (marks[i] >= 50 && marks[i] < 55) {
                grade[i] = 'E';
            } else if (marks[i] >= 0 && marks[i] < 50) {
                grade[i] = 'F';
            } else {
                cout << "\tInvalid marks for " << subjects[i] << endl;
                cout<<endl;
                cout<<"\t";
                system("pause");
                cout<<endl;
                main(); //Return to main function to again show menu.
            }
        }

        cout << "\t=====================================\n";
        cout << "\t             Grade Report             \n";
        cout << "\t=====================================\n";
        cout << "\tSubject\t\tMarks\tGrade\n";
        cout << endl;

        for (int i = 0; i < 3; ++i) {
            cout << "\t" << subjects[i] << "\t\t" << marks[i] << "\t" << grade[i] << endl;
        }
    } else if (choose == 'C' || choose == 'c') {
        // Subject list for course C
        string subjects[] = {"Graphics", "Illustrator", "Computer Multimedia"};
        int marks[3];
        char grade[3];

        for (int i = 0; i < 3; ++i) {
            cout << "\tEnter Marks for " << subjects[i] << ": ";
            cin >> marks[i];
            cout << endl;

            if (marks[i] >= 85 && marks[i] <= 100) {
                grade[i] = 'A';
            } else if (marks[i] >= 70 && marks[i] < 85) {
                grade[i] = 'B';
            } else if (marks[i] >= 60 && marks[i] < 70) {
                grade[i] = 'C';
            } else if (marks[i] >= 55 && marks[i] < 60) {
                grade[i] = 'D';
            } else if (marks[i] >= 50 && marks[i] < 55) {
                grade[i] = 'E';
            } else if (marks[i] >= 0 && marks[i] < 50) {
                grade[i] = 'F';
            } else {
                cout << "\tInvalid marks for " << subjects[i] << endl;
                cout<<endl;
                cout<<"\t";
                system("pause");
                cout<<endl;
                main(); //Return to main function to again show menu.
            }
        }

        cout << "\t=====================================\n";
        cout << "\t             Grade Report             \n";
        cout << "\t=====================================\n";
        cout << "\tSubject\t\tMarks\tGrade\n";
        cout << endl;

        for (int i = 0; i < 3; ++i) {
            cout << "\t" << subjects[i] << "\t\t" << marks[i] << "\t" << grade[i] << endl;
        }
    } else if (choose == 'D' || choose == 'd') {
        // Subject list for course D
        string subjects[] = {"Object Oriented Programming", "Java", "JavaScript"};
        int marks[3];
        char grade[3];

        for (int i = 0; i < 3; ++i) {
            cout << "\tEnter Marks for " << subjects[i] << ": ";
            cin >> marks[i];
            cout << endl;

            if (marks[i] >= 85 && marks[i] <= 100) {
                grade[i] = 'A';
            } else if (marks[i] >= 70 && marks[i] < 85) {
                grade[i] = 'B';
            } else if (marks[i] >= 60 && marks[i] < 70) {
                grade[i] = 'C';
            } else if (marks[i] >= 55 && marks[i] < 60) {
                grade[i] = 'D';
            } else if (marks[i] >= 50 && marks[i] < 55) {
                grade[i] = 'E';
            } else if (marks[i] >= 0 && marks[i] < 50) {
                grade[i] = 'F';
            } else {
                cout << "\tInvalid marks for " << subjects[i] << endl;
                cout<<endl;
                cout<<"\t";
                system("pause");
                cout<<endl;
                main(); //Return to main function to again show menu.
            }
        }

        cout << "\t=====================================\n";
        cout << "\t             Grade Report            \n";
        cout << "\t=====================================\n";
        cout << "\tSubject\t\tMarks\tGrade\n";
        cout << endl;

        for (int i = 0; i < 3; ++i) {
            cout << "\t" << subjects[i] << "\t\t" << marks[i] << "\t" << grade[i] << endl;
        }
    } else {
        cout << "\tInvalid Course ID. Please enter a valid Course ID.\n";
        cout<<endl;
        cout<<"\t";
        system("pause");
        cout<<endl;
        main(); //Return to main function to again show menu.
    }
}

//This function used to calculate GPA.
void gpa(int idnumber) {
    float sumGradePoints, sumCredits, totalCreditsCompleted;
    cout<<"  "<<endl;
    cout<<"\tGPA Calculation Of "<<"Student ID "<<idnumber<<endl<<endl;

    cout<<"\tEnter sum of grade point value for the full course: ";
    cin>>sumGradePoints;

    cout<<"\tEnter credit value for the full course: ";
    cin>>sumCredits;

    cout<<"\tEnter total number of credit values completed by Student ID "<<idnumber<<": ";
    cin>>totalCreditsCompleted;
    cout<<endl;

    float gpa = (sumGradePoints * sumCredits) / totalCreditsCompleted;

    cout<<"\tStudent ID "<<idnumber<<" of"<<" GPA: "<<gpa<<endl<<endl;
}

//This function used to display course fees.
void course_fee(){
	cout<<"\t================================================================================\n";
    cout<<"\t                               Courses, Course ID & Fees                      \n";
    cout<<"\t================================================================================\n";
    cout<<"\t |   Bachelor of Science (Hons) in IT         |    'A'    |    LKR 1,350,000  | \n";
    cout<<"\t |   Diploma in Information Technology        |    'B'    |    LKR 50,000     | \n";
    cout<<"\t |   Diploma in Multimedia		      |    'C'    |    LKR 50,000     | \n";
    cout<<"\t |   Diploma in Web Application Development   |    'D'    |    LKR 50,000     | \n";
    cout<<"\t================================================================================\n";
    cout<<endl;
}

//This function used to handle payments.
void payment(int choice, int idnumber, char courseID, string name){

    cout<<"\t================================================================================\n";
    cout<<"\tPayment Details             					 \n";
    cout<<"\t================================================================================\n";
    cout<<endl;

    string CardDetails[4];

    cout<<"\tEnter Credit/Debit card Number: ";
    cin>>CardDetails[0];
    cout<<"\tCard Holder Name: ";
    cin>>CardDetails[1];
    cout<<"\tExpire Date: ";
    cin>>CardDetails[2];
    cout<<"\tSecurity Code: ";
    cin>>CardDetails[3];
    cout<<endl;

    cout<<"\t================================================================================\n";
    cout<<"\tPlease Check Your Payment Details \n";
    cout<<"\t================================================================================\n\n";

    for(int i = 0;i<4;i++){
    	cout<<"\t";
        cout<<CardDetails[i]<<endl;
	}

	cout<<endl;
    cout<<"\t================================================================================\n";
    cout<<endl;
    cout<<"\t";
    cout<<"Options         ";
    cout<<":";
    cout<<"   1. Pay Now \n";
    cout<<"\t\t\t    2. Exit \n\n";
   	cout<<"\tChoose Options [1/2] : ";
   	cin>>choice;
   	cout<<endl;
    cout<<"\t================================================================================\n";
    cout<<endl;

    if(choice==1){
     	// Display receipt
    	cout<<"\t================================= Receipt ======================================\n\n";
    	cout<<"\tStudent ID: "<<idnumber<<endl;
    	cout<<"\tStudent Name: "<<name<<endl;

    	if (courseID=='A'||courseID=='a'){
    		cout<<"\tCourse: Bachelor of Science (Hons) in IT \n";
    		cout<<"\tAmount Paid: LKR 1,350,000 \n\n";
		}else if (courseID=='B'||courseID=='b'){
    		cout<<"\tCourse: Diploma in Information Technology \n";
    		cout<<"\tAmount Paid: LKR 50,000 \n\n";
		}else if (courseID=='C'||courseID=='c'){
    		cout<<"\tCourse: Diploma in Multimedia \n";
    		cout<<"\tAmount Paid: LKR 50,000 \n\n";
		}else{
			cout<<"\tCourse: Diploma in Web Application Development \n";
    		cout<<"\tAmount Paid: LKR 50,000 \n\n";
		}

     	cout<<"\t================================================================================\n";
    	cout<<"\t======================== Thank you for your payment! ===========================\n";
     	cout<<"\t================================================================================\n";
     	cout<<endl;
     	cout<<"\t";
        system("pause");
        cout<<endl;
        main(); //Return to main function to again show menu.
	}else if(choice==2){
	 	//Exit
	 	cout<<"\t";
        cout<<"Exiting Options.\n";
	}else{
		cout<<"\t";
        cout<<"Invalid choice. Please enter a valid option.\n";
        cout<<endl;
        cout<<"\t";
        system("pause");
        cout<<endl;
        main();
	}
}
