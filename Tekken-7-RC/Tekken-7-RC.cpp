// Tekken-7-RC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>

using namespace std;

int points[9] = { 1, 2, 3, 3, 4, 5, 6, 7, 8 };
float maxpoints[9] = { 2.5, 3, 4, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5 };
int global;
float tracker;
int staticTracker;
int player_dan;
int opponentdan;

int Count()
{
	float probablity;
	int choice;
	int dan_score;
	int final_score;
	float floating_points;
	int percent;
	percent = tracker / maxpoints[global] * 100;
	cout << "================================================================================";
	cout << "Player Skill Level: " << player_dan << endl;
	cout << "Min: " << staticTracker << endl;
	cout << "Max: " << maxpoints[global] << endl;
	cout << "Current tracker: " << tracker << " (" << percent << "%)" << endl;
	cout << "================================================================================" << endl;
	probablity = maxpoints[global] - tracker;
	if (probablity <= 0.25) cout << "***!!!Playing with at least +/- 2 DAN will guarantee a promotion!!!***" << endl;
	if (tracker >= staticTracker) cout << "You're in the promotion zone! Green light." << endl;
	cout << endl;
	switch (player_dan) {
	default:
		break;
	case 1:
		cout << "=SILVERS=" << endl;
		cout << "* 1 - 1 Dan *" << endl;
		cout << "2 - 2 Dan" << endl;
		cout << "3 - 3 Dan" << endl;
		cout << "=LIGHT BLUE=" << endl;
		cout << "4 - Initiate" << endl;
		cout << "5 - Mentor" << endl;
		cout << "6 - Expert" << endl;
		cout << "7 - Grand Master" << endl;
		break;
	case 2:
		cout << "=SILVERS=" << endl;
		cout << "1 - 1 Dan" << endl;
		cout << "* 2 - 2 Dan *" << endl;
		cout << "3 - 3 Dan" << endl;
		cout << "=LIGHT BLUE=" << endl;
		cout << "4 - Initiate" << endl;
		cout << "5 - Mentor" << endl;
		cout << "6 - Expert" << endl;
		cout << "7 - Grand Master" << endl;
		break;
	case 3:
		cout << "=SILVERS=" << endl;
		cout << "1 - 1 Dan" << endl;
		cout << "2 - 2 Dan" << endl;
		cout << "* 3 - 3 Dan *" << endl;
		cout << "=LIGHT BLUE=" << endl;
		cout << "4 - Initiate" << endl;
		cout << "5 - Mentor" << endl;
		cout << "6 - Expert" << endl;
		cout << "7 - Grand Master" << endl;
		break;
	case 4:
		cout << "=SILVERS=" << endl;
		cout << "1 - 1 Dan" << endl;
		cout << "2 - 2 Dan" << endl;
		cout << "3 - 3 Dan" << endl;
		cout << "=LIGHT BLUE=" << endl;
		cout << "* 4 - Initiate *" << endl;
		cout << "5 - Mentor" << endl;
		cout << "6 - Expert" << endl;
		cout << "7 - Grand Master" << endl;
		break;
	case 5:
		cout << "=SILVERS=" << endl;
		cout << "2 - 2 Dan" << endl;
		cout << "3 - 3 Dan" << endl;
		cout << "=LIGHT BLUE=" << endl;
		cout << "4 - Initiate" << endl;
		cout << "* 5 - Mentor *" << endl;
		cout << "6 - Expert" << endl;
		cout << "7 - Grand Master" << endl;
		cout << "=GREEN=" << endl;
		cout << "8 - Brawler" << endl;
		break;
	case 6:
		cout << "=SILVERS=" << endl;
		cout << "3 - 3 Dan" << endl;
		cout << "=LIGHT BLUE=" << endl;
		cout << "4 - Initiate" << endl;
		cout << "5 - Mentor" << endl;
		cout << "* 6 - Expert *" << endl;
		cout << "7 - Grand Master" << endl;
		cout << "=GREEN=" << endl;
		cout << "8 - Brawler" << endl;
		cout << "9 - Marauder" << endl;
		break;
	case 7:
		cout << "=LIGHT BLUE=" << endl;
		cout << "4 - Initiate" << endl;
		cout << "5 - Mentor" << endl;
		cout << "6 - Expert" << endl;
		cout << "* 7 - Grand Master* " << endl;
		cout << "=GREEN=" << endl;
		cout << "8 - Brawler" << endl;
		cout << "9 - Marauder" << endl;
		cout << "10 - Fighter" << endl;
		break;
	case 8:
		cout << "=LIGHT BLUE=" << endl;
		cout << "5 - Mentor" << endl;
		cout << "6 - Expert" << endl;
		cout << "7 - Grand Master" << endl;
		cout << "=GREEN=" << endl;
		cout << "* 8 - Brawler *" << endl;
		cout << "9 - Marauder" << endl;
		cout << "10 - Fighter" << endl;
		cout << "11 - Vanguard" << endl;
		break;
	case 9:
		cout << "=LIGHT BLUE=" << endl;
		cout << "6 - Expert" << endl;
		cout << "7 - Grand Master" << endl;
		cout << "=GREEN=" << endl;
		cout << "8 - Brawler" << endl;
		cout << "* 9 - Marauder *" << endl;
		cout << "10 - Fighter" << endl;
		cout << "11 - Vanguard" << endl;
		cout << "=YELLOW=" << endl;
		cout << "12 - Warrior" << endl;
		break;
	case 10:
		cout << "=LIGHT BLUE=" << endl;
		cout << "7 - Grand Master" << endl;
		cout << "=GREEN=" << endl;
		cout << "8 - Brawler" << endl;
		cout << "9 - Marauder" << endl;
		cout << "* 10 - Fighter *" << endl;
		cout << "11 - Vanguard" << endl;
		cout << "=YELLOW=" << endl;
		cout << "12 - Warrior" << endl;
		cout << "13 - Vindicator" << endl;
		break;
	case 11:
		cout << "=GREEN=" << endl;
		cout << "8 - Brawler" << endl;
		cout << "9 - Marauder" << endl;
		cout << "10 - Fighter" << endl;
		cout << "* 11 - Vanguard *" << endl;
		cout << "=YELLOW=" << endl;
		cout << "12 - Warrior" << endl;
		cout << "13 - Vindicator" << endl;
		cout << "14 - Juggernaut" << endl;
		break;
	case 12:
		cout << "=GREEN=" << endl;
		cout << "9 - Marauder" << endl;
		cout << "10 - Fighter" << endl;
		cout << "11 - Vanguard" << endl;
		cout << "=YELLOW=" << endl;
		cout << "* 12 - Warrior *" << endl;
		cout << "13 - Vindicator" << endl;
		cout << "14 - Juggernaut" << endl;
		cout << "15 - Usurper" << endl;
		break;
	case 13:
		cout << "=GREEN=" << endl;
		cout << "10 - Fighter" << endl;
		cout << "11 - Vanguard" << endl;
		cout << "=YELLOW=" << endl;
		cout << "12 - Warrior" << endl;
		cout << "* 13 - Vindicator *" << endl;
		cout << "14 - Juggernaut" << endl;
		cout << "15 - Usurper" << endl;
		cout << "=ORANGE=" << endl;
		cout << "16 - Vanquisher" << endl;
		break;
	case 14:
		cout << "=GREEN=" << endl;
		cout << "11 - Vanguard" << endl;
		cout << "=YELLOW=" << endl;
		cout << "12 - Warrior" << endl;
		cout << "13 - Vindicator" << endl;
		cout << "* 14 - Juggernaut *" << endl;
		cout << "15 - Usurper" << endl;
		cout << "=ORANGE=" << endl;
		cout << "16 - Vanquisher" << endl;
		cout << "17 - Destroyer" << endl;
		break;
	case 15:
		cout << "=YELLOW=" << endl;
		cout << "12 - Warrior" << endl;
		cout << "13 - Vindicator" << endl;
		cout << "14 - Juggernaut" << endl;
		cout << "* 15 - Usurper *" << endl;
		cout << "=ORANGE=" << endl;
		cout << "16 - Vanquisher" << endl;
		cout << "17 - Destroyer" << endl;
		cout << "18 - Savior" << endl;
		break;
	case 16:
		cout << "=YELLOW=" << endl;
		cout << "13 - Vindicator" << endl;
		cout << "14 - Juggernaut" << endl;
		cout << "15 - Usurper" << endl;
		cout << "=ORANGE=" << endl;
		cout << "* 16 - Vanquisher *" << endl;
		cout << "17 - Destroyer" << endl;
		cout << "18 - Savior" << endl;
		cout << "19 - Overlord" << endl;
		break;
	case 17:
		cout << "=YELLOW=" << endl;
		cout << "14 - Juggernaut" << endl;
		cout << "15 - Usurper" << endl;
		cout << "=ORANGE=" << endl;
		cout << "16 - Vanquisher" << endl;
		cout << "* 17 - Destroyer *" << endl;
		cout << "18 - Savior" << endl;
		cout << "19 - Overlord" << endl;
		cout << "=RED=" << endl;
		cout << "20 - Genbu" << endl;
		break;
	case 18:
		cout << "=YELLOW=" << endl;
		cout << "15 - Usurper" << endl;
		cout << "=ORANGE=" << endl;
		cout << "16 - Vanquisher" << endl;
		cout << "17 - Destroyer" << endl;
		cout << "* 18 - Savior *" << endl;
		cout << "19 - Overlord" << endl;
		cout << "=RED=" << endl;
		cout << "20 - Genbu" << endl;
		cout << "21 - Byakko" << endl;
		break;
	case 19:
		cout << "=ORANGE=" << endl;
		cout << "16 - Vanquisher" << endl;
		cout << "17 - Destroyer" << endl;
		cout << "18 - Savior" << endl;
		cout << "* 19 - Overlord *" << endl;
		cout << "=RED=" << endl;
		cout << "20 - Genbu" << endl;
		cout << "21 - Byakko" << endl;
		cout << "22 - Seiryu" << endl;
		break;
	case 20:
		cout << "=ORANGE=" << endl;
		cout << "17 - Destroyer" << endl;
		cout << "18 - Savior" << endl;
		cout << "19 - Overlord" << endl;
		cout << "=RED=" << endl;
		cout << "* 20 - Genbu *" << endl;
		cout << "21 - Byakko" << endl;
		cout << "22 - Seiryu" << endl;
		cout << "23 - Suzaku" << endl;
		break;
	case 21:
		cout << "=ORANGE=" << endl;
		cout << "17 - Destroyer" << endl;
		cout << "18 - Savior" << endl;
		cout << "19 - Overlord" << endl;
		cout << "=RED=" << endl;
		cout << "20 - Genbu" << endl;
		cout << "* 21 - Byakko *" << endl;
		cout << "22 - Seiryu" << endl;
		cout << "23 - Suzaku" << endl;
		cout << "=RULER=" << endl;
		cout << "24 - Mighty Ruler" << endl;
		break;
	case 22:
		cout << "=ORANGE=" << endl;
		cout << "19 - Overlord" << endl;
		cout << "=RED=" << endl;
		cout << "20 - Genbu" << endl;
		cout << "21 - Byakko" << endl;
		cout << "* 22 - Seiryu *" << endl;
		cout << "23 - Suzaku" << endl;
		cout << "=RULER=" << endl;
		cout << "24 - Mighty Ruler" << endl;
		cout << "25 - Revered Ruler" << endl;
		break;
	case 23:
		cout << "=RED=" << endl;
		cout << "20 - Genbu" << endl;
		cout << "21 - Byakko" << endl;
		cout << "22 - Seiryu" << endl;
		cout << "* 23 - Suzaku *" << endl;
		cout << "=RULER=" << endl;
		cout << "24 - Mighty Ruler" << endl;
		cout << "25 - Revered Ruler" << endl;
		cout << "26 - Divine Ruler" << endl;
		break;
	case 24:
		cout << "=RED=" << endl;
		cout << "21 - Byakko" << endl;
		cout << "22 - Seiryu" << endl;
		cout << "23 - Suzaku" << endl;
		cout << "=RULER=" << endl;
		cout << "* 24 - Mighty Ruler *" << endl;
		cout << "25 - Revered Ruler" << endl;
		cout << "26 - Divine Ruler" << endl;
		cout << "27 - Eternal Ruler" << endl;
		break;
	case 25:
		cout << "=RED=" << endl;
		cout << "22 - Seiryu" << endl;
		cout << "23 - Suzaku" << endl;
		cout << "=RULER=" << endl;
		cout << "24 - Mighty Ruler" << endl;
		cout << "* 25 - Revered Ruler *" << endl;
		cout << "26 - Divine Ruler" << endl;
		cout << "27 - Eternal Ruler" << endl;
		cout << "=BLUE=" << endl;
		cout << "28 - Fujin" << endl;
		break;
	case 26:
		cout << "=RED=" << endl;
		cout << "23 - Suzaku" << endl;
		cout << "=RULER=" << endl;
		cout << "24 - Mighty Ruler" << endl;
		cout << "25 - Revered Ruler" << endl;
		cout << "* 26 - Divine Ruler *" << endl;
		cout << "27 - Eternal Ruler" << endl;
		cout << "=BLUE=" << endl;
		cout << "28 - Fujin" << endl;
		cout << "29 - Raijin" << endl;
		break;
	case 27:
		cout << "=RULER=" << endl;
		cout << "24 - Mighty Ruler" << endl;
		cout << "25 - Revered Ruler" << endl;
		cout << "26 - Divine Ruler" << endl;
		cout << "* 27 - Eternal Ruler *" << endl;
		cout << "=BLUE=" << endl;
		cout << "28 - Fujin" << endl;
		cout << "29 - Raijin" << endl;
		cout << "30 - Yaksa" << endl;
		break;
	case 28:
		cout << "=RULER=" << endl;
		cout << "25 - Revered Ruler" << endl;
		cout << "26 - Divine Ruler" << endl;
		cout << "27 - Eternal Ruler" << endl;
		cout << "=BLUE=" << endl;
		cout << "* 28 - Fujin *" << endl;
		cout << "29 - Raijin" << endl;
		cout << "30 - Yaksa" << endl;
		cout << "31 - Ryujin" << endl;
		break;
	case 29:
		cout << "=RULER=" << endl;
		cout << "26 - Divine Ruler" << endl;
		cout << "27 - Eternal Ruler" << endl;
		cout << "=BLUE=" << endl;
		cout << "28 - Fujin" << endl;
		cout << "* 29 - Raijin *" << endl;
		cout << "30 - Yaksa" << endl;
		cout << "31 - Ryujin" << endl;
		cout << "=PURPLE=" << endl;
		cout << "32 - Emperor" << endl;
		break;
	case 30:
		cout << "=RULER=" << endl;
		cout << "27 - Eternal Ruler" << endl;
		cout << "=BLUE=" << endl;
		cout << "28 - Fujin" << endl;
		cout << "29 - Raijin" << endl;
		cout << "* 30 - Yaksa *" << endl;
		cout << "31 - Ryujin" << endl;
		cout << "=PURPLE=" << endl;
		cout << "32 - Emperor" << endl;
		cout << "33 - Tekken Lord" << endl;
		break;
	case 31:
		cout << "=BLUE=" << endl;
		cout << "28 - Fujin" << endl;
		cout << "29 - Raijin" << endl;
		cout << "30 - Yaksa" << endl;
		cout << "* 31 - Ryujin *" << endl;
		cout << "=PURPLE=" << endl;
		cout << "32 - Emperor" << endl;
		cout << "33 - Tekken Lord" << endl;
		cout << "=GOLD=" << endl;
		cout << "34 - Tekken God" << endl;
		break;
	case 32:
		cout << "=BLUE=" << endl;
		cout << "29 - Raijin" << endl;
		cout << "30 - Yaksa" << endl;
		cout << "31 - Ryujin" << endl;
		cout << "=PURPLE=" << endl;
		cout << "* 32 - Emperor *" << endl;
		cout << "33 - Tekken Lord" << endl;
		cout << "=GOLD=" << endl;
		cout << "34 - Tekken God" << endl;
		cout << "35 - True Tekken God" << endl;
		break;
	case 33:
		cout << "=BLUE=" << endl;
		cout << "30 - Yaksa" << endl;
		cout << "31 - Ryujin" << endl;
		cout << "=PURPLE=" << endl;
		cout << "32 - Emperor" << endl;
		cout << "* 33 - Tekken Lord *" << endl;
		cout << "=GOLD=" << endl;
		cout << "34 - Tekken God" << endl;
		cout << "35 - True Tekken God" << endl;
		cout << "===MAX===" << endl;
		cout << "36! Tekken God Prime" << endl;
		break;

	}

	cout << endl;
	cout << "Enter opponent DAN: ";
	cin >> opponentdan;
	if (opponentdan > player_dan) dan_score = opponentdan - player_dan;
	else if (opponentdan < player_dan) dan_score = player_dan - opponentdan;
	else if (opponentdan == player_dan) dan_score = 0;
	else Count();
	switch (dan_score) {
	default:
		break;
	case 0:
		floating_points = 1;
		break;
	case 1:
		floating_points = 0.5;
		break;
	case 2:
		floating_points = 0.25;
		break;
	case 3:
		floating_points = 0.125;
		break;
	}
	cout << "Score (Win is 1, Lose is 0): ";
	cin >> final_score;
	if (final_score == 1) tracker += floating_points;
	else if (final_score == 0) tracker -= floating_points;
	else Count();
	cout << endl;
	cout << "Current tracker: " << tracker << endl;
	system("pause");
	system("cls");
	Count();
	return 1;
}


int main()
{
	cout << "Tekken Rank Counter v1" << endl;
	cout << "Created by https://github.com/Rein300" << endl;
	cout << "================================================================================" << endl;
	cout << "Player DAN: ";
	cin >> player_dan;
	cout << endl;
	cout << "Silver = 0" << endl;
	cout << "Light Blue = 1" << endl;
	cout << "Green = 2" << endl;
	cout << "Yellow = 3" << endl;
	cout << "Orange = 4" << endl;
	cout << "Red = 5" << endl;
	cout << "Ruler = 6" << endl;
	cout << "Blue = 7" << endl;
	cout << "Purple and gold = 8" << endl;
	cout << "Choice: ";
	cin >> global;
	if (global == 0) {
		cout << endl << "Min points: " << points[0] << endl;
		staticTracker = points[0];
		system("pause");
		system("cls");
		Count();
	}
	if (global == 1) {
		cout << endl << "Min points: " << points[1] << endl;
		staticTracker = points[1];
		system("pause");
		system("cls");
		Count();
	}
	if (global == 2) {
		cout << endl << "Min points: " << points[2] << endl;
		staticTracker = points[2];
		system("pause");
		system("cls");
		Count();
	}
	if (global == 3) {
		cout << endl << "Min points: " << points[3] << endl;
		staticTracker = points[3];
		system("pause");
		system("cls");
		Count();
	}
	if (global == 4) {
		cout << endl << "Min points: " << points[4] << endl;
		staticTracker = points[4];
		system("pause");
		system("cls");
		Count();
	}
	if (global == 5) {
		cout << endl << "Min points: " << points[5] << endl;
		staticTracker = points[5];
		system("pause");
		system("cls");
		Count();
	}
	if (global == 6) {
		cout << endl << "Min points: " << points[6] << endl;
		staticTracker = points[6];
		system("pause");
		system("cls");
		Count();
	}
	if (global == 7) {
		cout << endl << "Min points: " << points[7] << endl;
		staticTracker = points[7];
		system("pause");
		system("cls");
		Count();
	}
	if (global == 8) {
		cout << endl << "Min points: " << points[8] << endl;
		staticTracker = points[8];
		system("pause");
		system("cls");
		Count();
	}

	else return 0;
}


