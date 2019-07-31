
#include <iostream>
#include <string>
#include <algorithm>
// Declare Classroom Data | Index 0 is 7am Index 11 is 6pm
int class10648[] = {560, 750, 1800, 1650, 2000, 850, 800, 1300, 1850, 1600, 840, 750};
int class14568[] = {850, 1560, 1600, 1780, 1980, 700, 850, 2200, 780, 830, 750, 550};
int class14569[] = {650, 790, 2000, 1850, 2000, 1600, 850, 700, 1200, 830, 800, 800};
int class216110[] = {900, 600, 1950, 1300, 1800, 950, 1200, 960, 1900, 1890, 890, 850};
int class237130[] = {550, 1670, 850, 1560, 1600, 1500, 850, 700, 1200, 820, 750, 650};
std::string time[] = { "7am", "8am", "9am", "10am", "11am", "12am", "1pm", "2pm", "3pm", "4pm", "5pm", "6pm" };
int EN10648[12];
int EN14568[12];
int EN14569[12];
int EN216110[12];
int EN237130[12];
void menu()
{
	start:
	system("pause");
	system("cls");
	int option;
	std::cout << "CO2 Data\n";
	std::cout << "---------------------------------------------------------- \n";
	std::cout << "Press 0 to exit program. \n";
	std::cout << "Press 1 to compare average CO2 for a Selected Timing. \n";
	std::cout << "Press 2 to find difference in CO2 for two classrooms. \n";
	std::cout << "Press 3 to find 'Superior' and 'Very Good' readings for selected classrooms. \n";
	std::cout << "Press 4 to find 4 highest CO2 readings and time among all the classrooms. \n";
	std::cout << "Press 5 to find average CO2 of each classroom and highest average CO2 classroom. \n";
	std::cout << "---------------------------------------------------------- \n";
	std::cout << "Please enter a number from 1 to 5. \n";
	std::cin >> option;

	switch (option)
	{
	case 0:
	{
		exit(0);
	}
	break;

	case 1:
	{
		system("cls");
		int clsrm1 = 0; //classroom 1
		int clsrm2 = 0; //classroom 2
		int sum1 = 0; //sum of classroom 1
		int sum2 = 0; //sum of classroom 2
		std::string classroom1; //name of classroom 1
		std::string classroom2; //name of classroom 2
		const int max = 12;
		std::cout << "Select the Classrooms to compare. \n";
		std::cout << "Enter in 0 to return back to main menu. \n";
		std::cout << "Enter in 1 for EN10-6-48. \n";
		std::cout << "Enter in 2 for EN14-5-68. \n";
		std::cout << "Enter in 3 for EN14-5-69. \n";
		std::cout << "Enter in 4 for EN21-6-110. \n";
		std::cout << "Enter in 5 for EN23-7-130. \n";
		std::cin >> clsrm1;
		if (clsrm1 == 0)
			goto start;
		else if (clsrm1 > 5 || clsrm1 < 0)
		{
			std::cout << "Invalid classroom. \n";
			std::cout << "Enter in first classroom again. \n";
			std::cin >> clsrm1;
		}
		system("cls");
		switch (clsrm1)
		{
		case 0:
			return;
			break;
		case 1:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-10-6-48 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN10648[i];
				sum1 += EN10648[i];
				classroom1 = "EN-10-6-48";
			}
			break;
		case 2:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-14-5-68 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN14568[i];
				sum1 += EN14568[i];
				classroom1 = "EN-14-5-68";
			}
			break;
		case 3:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-14-5-69 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN14569[i];
				sum1 += EN14569[i];
				classroom1 = "EN-14-5-69";
			}
			break;
		case 4:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-21-6-110 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN216110[i];
				sum1 += EN216110[i];
				classroom1 = "EN-21-6-110";
			}
			break;
		case 5:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-23-7-130 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN237130[i];
				sum1 += EN237130[i];
				classroom1 = "EN-23-7-130";
			}
			break;
		}
		system("cls");
		std::cout << "Enter in 0 to return back to main menu. \n";
		std::cout << "Enter in 1 for EN10-6-48. \n";
		std::cout << "Enter in 2 for EN14-5-68. \n";
		std::cout << "Enter in 3 for EN14-5-69. \n";
		std::cout << "Enter in 4 for EN21-6-110. \n";
		std::cout << "Enter in 5 for EN23-7-130. \n";
		std::cout << "Enter in second classroom now. \n";
		std::cin >> clsrm2;
		if (clsrm2 == 0)
			goto start;
		if (clsrm1 == clsrm2 || clsrm2 > 5 || clsrm2 < 0)
		{
			std::cout << "Invalid classroom. \n";
			std::cout << "Enter in second classroom again. \n";
			std::cin >> clsrm2;
		}
		switch (clsrm2)
		{
		case 0:
			return;
			break;
		case 1:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-10-6-48 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN10648[i];
				sum2 += EN10648[i];
				classroom2 = "EN-10-6-48";
			}
			break;
		case 2:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-14-5-68 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN14568[i];
				sum2 += EN14568[i];
				classroom2 = "EN-14-5-68";
			}
			break;
		case 3:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-14-5-69 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN14569[i];
				sum2 += EN14569[i];
				classroom2 = "EN-14-5-69";
			}
			break;
		case 4:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-21-6-110 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN216110[i];
				sum2 += EN216110[i];
				classroom2 = "EN-21-6-110";
			}
			break;
		case 5:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-23-7-130 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN237130[i];
				sum2 += EN237130[i];
				classroom2 = "EN-23-7-130";
			}
			break;
		}
		system("cls");
		std::cout << "Average CO2 reading of " << classroom1 << ": " << sum1 << "\n";
		std::cout << "Average CO2 reading of " << classroom2 << ": " << sum2 << "\n";
		goto start;
		break;
	}
	case 2:
	{
		system("cls");
		int clsrm1 = 0; //classroom 1
		int clsrm2 = 0; //classroom 2
		int sum1 = 0; //sum of classroom 1
		int sum2 = 0; //sum of classroom 2
		std::string classroom1; //name of classroom 1
		std::string classroom2; //name of classroom 2
		const int max = 12;
		std::cout << "Select the Classrooms to compare. \n";
		std::cout << "Enter in 0 to return back to main menu. \n";
		std::cout << "Enter in 1 for EN10-6-48. \n";
		std::cout << "Enter in 2 for EN14-5-68. \n";
		std::cout << "Enter in 3 for EN14-5-69. \n";
		std::cout << "Enter in 4 for EN21-6-110. \n";
		std::cout << "Enter in 5 for EN23-7-130. \n";
		std::cin >> clsrm1;
		if (clsrm1 == 0)
			goto start;
		else if (clsrm1 > 5 || clsrm1 < 0)
		{
			std::cout << "Invalid classroom. \n";
			std::cout << "Enter in first classroom again. \n";
			std::cin >> clsrm1;
		}
		system("cls");
		switch (clsrm1)
		{
		case 0:
			return;
			break;
		case 1:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-10-6-48 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN10648[i];
				sum1 += EN10648[i];
				classroom1 = "EN-10-6-48";
			}
			break;
		case 2:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-14-5-68 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN14568[i];
				sum1 += EN14568[i];
				classroom1 = "EN-14-5-68";
			}
			break;
		case 3:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-14-5-69 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN14569[i];
				sum1 += EN14569[i];
				classroom1 = "EN-14-5-69";
			}
			break;
		case 4:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-21-6-110 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN216110[i];
				sum1 += EN216110[i];
				classroom1 = "EN-21-6-110";
			}
			break;
		case 5:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-23-7-130 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN237130[i];
				sum1 += EN237130[i];
				classroom1 = "EN-23-7-130";
			}
			break;
		}
		system("cls");
		std::cout << "Enter in 0 to return back to main menu. \n";
		std::cout << "Enter in 1 for EN10-6-48. \n";
		std::cout << "Enter in 2 for EN14-5-68. \n";
		std::cout << "Enter in 3 for EN14-5-69. \n";
		std::cout << "Enter in 4 for EN21-6-110. \n";
		std::cout << "Enter in 5 for EN23-7-130. \n";
		std::cout << "Enter in second classroom now. \n";
		std::cin >> clsrm2;
		if (clsrm2 == 0)
			goto start;
		if (clsrm1 == clsrm2 || clsrm2 > 5 || clsrm2 < 0)
		{
			std::cout << "Invalid classroom. \n";
			std::cout << "Enter in second classroom again. \n";
			std::cin >> clsrm2;
		}
		switch (clsrm2)
		{
		case 0:
			return;
			break;
		case 1:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-10-6-48 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN10648[i];
				sum2 += EN10648[i];
				classroom2 = "EN-10-6-48";
			}
			break;
		case 2:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-14-5-68 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN14568[i];
				sum2 += EN14568[i];
				classroom2 = "EN-14-5-68";
			}
			break;
		case 3:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-14-5-69 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN14569[i];
				sum2 += EN14569[i];
				classroom2 = "EN-14-5-69";
			}
			break;
		case 4:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-21-6-110 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN216110[i];
				sum2 += EN216110[i];
				classroom2 = "EN-21-6-110";
			}
			break;
		case 5:
			for (int i = 0; i < max; i++)
			{
				std::cout << "EN-23-7-130 Index " << (i + 1) << ":" << std::endl;
				std::cin >> EN237130[i];
				sum2 += EN237130[i];
				classroom2 = "EN-23-7-130";
			}
			break;
		}
		system("cls");
		std::cout << "Difference of " << classroom1 << " - " << classroom2 << ": " << (sum1 - sum2) << "\n";
		goto start;
		break;
	}
	case 3:
	{
		system("cls");
		int clsrm1 = 0; //classroom 1
		std::string classroom1; //name of classroom 1
		std::string total;
		std::string superior;
		std::string verygood;
		const int max = 12;
		std::cout << "Select the Classroom to find Superior and Very Good readings. \n";
		std::cout << "Enter in 0 to return back to main menu. \n";
		std::cout << "Enter in 1 for EN10-6-48. \n";
		std::cout << "Enter in 2 for EN14-5-68. \n";
		std::cout << "Enter in 3 for EN14-5-69. \n";
		std::cout << "Enter in 4 for EN21-6-110. \n";
		std::cout << "Enter in 5 for EN23-7-130. \n";
		std::cin >> clsrm1;
		if (clsrm1 == 0)
			goto start;
		else if (clsrm1 > 5 || clsrm1 < 0)
		{
			std::cout << "Invalid classroom. \n";
			std::cout << "Enter in first classroom again. \n";
			std::cin >> clsrm1;
		}
		system("cls");
		switch (clsrm1)
		{
		case 0:
			return;
			break;
		case 1:
			for (int i = 0; i < max; i++)
			{
				if (class10648[i] > 0 && class10648[i] < 800)
				{
					std::string values = std::to_string(class10648[i]);
					superior += values + " " + time[i] + " ";
				}
				if (class10648[i] > 801 && class10648[i] < 1200)
				{
					std::string values2 = std::to_string(class10648[i]);
					verygood += values2 + " " + time[i] + " ";
				}
			}
			std::cout << "EN10-6-48 Superior CO2 " << superior << std::endl;
			std::cout << "EN10-6-48 Very Good CO2 " << verygood << std::endl;
			break;

		case 2:
			for (int i = 0; i < max; i++)
			{
				if (class14568[i] > 0 && class14568[i] <= 800)
				{
					std::string values = std::to_string(class14568[i]);
					superior += values + " " + time[i] + " ";
				}
				if (class14568[i] >= 801 && class14568[i] < 1200)
				{
					std::string values2 = std::to_string(class14568[i]);
					verygood += values2 + " " + time[i] + " ";
				}
			}
			std::cout << "EN14-5-68 Superior CO2 " << superior << std::endl;
			std::cout << "EN14-5-68 Very Good CO2 " << verygood << std::endl;
			break;
		case 3:
			for (int i = 0; i < max; i++)
			{
				if (class14569[i] > 0 && class14569[i] <= 800)
				{
					std::string values = std::to_string(class14569[i]);
					superior += values + " " + time[i] + " ";
				}
				if (class14569[i] >= 801 && class14569[i] < 1200)
				{
					std::string values2 = std::to_string(class14569[i]);
					verygood += values2 + " " + time[i] + " ";
				}
			}
			std::cout << "EN14-5-69 Superior CO2 " << superior << std::endl;
			std::cout << "EN14-5-69 Very Good CO2 " << verygood << std::endl;
			break;
		case 4:
			for (int i = 0; i < max; i++)
			{
				if (class216110[i] > 0 && class216110[i] <= 800)
				{
					std::string values = std::to_string(class216110[i]);
					superior += values + " " + time[i] + " ";
				}
				if (class216110[i] >= 801 && class216110[i] < 1200)
				{
					std::string values2 = std::to_string(class216110[i]);
					verygood += values2 + " " + time[i] + " ";
				}
			}
			std::cout << "EN21-6-110 Superior CO2 " << superior << std::endl;
			std::cout << "EN21-6-110 Very Good CO2 " << verygood << std::endl;
			break;
		case 5:
			for (int i = 0; i < max; i++)
			{
				if (class237130[i] > 0 && class237130[i] <= 800)
				{
					std::string values = std::to_string(class237130[i]);
					superior += values + " " + time[i] + " ";
				}
				if (class237130[i] >= 801 && class237130[i] < 1200)
				{
					std::string values2 = std::to_string(class237130[i]);
					verygood += values2 + " " + time[i] + " ";
				}
			}
			std::cout << "EN23-7-130 Superior CO2 " << superior << std::endl;
			std::cout << "EN23-7-130 Very Good CO2 " << verygood << std::endl;
			break;
		}
		goto start;
		break;
	}
	case 4:
	{
		int timeint1, timeint2, timeint3, timeint4, timeint5;
		const int max = 12;
		system("cls");
		for (int i = 0; i < max; i++)
		{
			if (class10648[0] < class10648[i])
			{
				class10648[0] = class10648[i];
				timeint1 = i;
			}
			if (class14568[0] < class14568[i])
			{
				class14568[0] = class14568[i];
				timeint2 = i;
			}
			if (class14569[0] < class14569[i])
			{
				class14569[0] = class14569[i];
				timeint3 = i;
			}
			if (class216110[0] < class216110[i])
			{
				class216110[0] = class216110[i];
				timeint4 = i;
			}
			if (class237130[0] < class237130[i])
			{
				class237130[0] = class237130[i];
				timeint5 = i;
			}
		}
		static const int size = 5;
		int class1 = class10648[0];
		int class2 = class14568[0];
		int class3 = class14569[0];
		int class4 = class216110[0];
		int class5 = class237130[0];
		int arr[2][size] = { {class1, class2, class3, class4, class5}, {timeint1, timeint2, timeint3, timeint4, timeint5} };
		for (int i = 0; i < 2; i++)
			std::sort(arr[i], arr[i] + size);
		std::string time4 = time[arr[1][4]];
		std::string time3 = time[arr[1][3]];
		std::string time2 = time[arr[1][2]];
		std::string time1 = time[arr[1][1]];
		std::cout << "Top 4 Highest Values: " << arr[0][4] << " " << time4 << " " << arr[0][3] << " " << time3 << " " << arr[0][2] << " " << time2 << " " << arr[0][1] << " " << time1 << " " << std::endl;
		goto start;
		break;
	}
	case 5:
	{
		system("cls");
		std::string classroom[] = { "EN10-6-48", "EN14-5-68", "EN14-5-69", "EN21-6-110", "EN23-7-130" };
		const int max = 12;
		int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
		int clsrm1 = 0, clsrm2 = 1, clsrm3 = 2, clsrm4 = 3, clsrm5 = 4;
		for (int i = 0;i < max; i++)
		{
			sum1 += class10648[i];
			sum2 += class14568[i];
			sum3 += class14569[i];
			sum4 += class216110[i];
			sum5 += class237130[i];
		}
		int arr[2][5] = { {sum1,sum2,sum3,sum4,sum5}, {clsrm1, clsrm2, clsrm3, clsrm4, clsrm5} };
		for (int i = 0; i < 2; i++)
			std::sort(arr[i], arr[i] + 5);
		std::cout << "Average CO2 of EN10-6-48: " << sum1 / 12 << std::endl;
		std::cout << "Average CO2 of EN14-5-68: " << sum2 / 12 << std::endl;
		std::cout << "Average CO2 of EN14-5-69: " << sum3 / 12 << std::endl;
		std::cout << "Average CO2 of EN21-6-110: " << sum4 / 12 << std::endl;
		std::cout << "Average CO2 of EN23-7-130: " << sum5 / 12 << std::endl;
		std::cout << "---------------------------------------------------------- \n";
		std::cout << "Highest Average: " << arr[0][4] / 12 << std::endl;
		std::cout << "Classroom: " << classroom[arr[1][4]] << std::endl;
		goto start;
		break;
	}
	}
}

int main()
{
	menu();
}
