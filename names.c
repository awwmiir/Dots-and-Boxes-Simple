#include "names.h"/*this function checks if any player created any boxes and looks at the turn and puts the name of the player inside each box*/
void name(int coordinate1, int coordinate2, int coordinate3, int turn, char vertical[6][6], char horizental[6][6], char names[6][6])
{
	if (coordinate1 == 0)/*if the last input was horizental*/
	{
		if (horizental[coordinate2][coordinate3 - 1] == '-' && vertical[coordinate2 - 1][coordinate3 - 1] == '|' && vertical[coordinate2 - 1][coordinate3] == '|')/*this line checks if the horizental line and 2 vertical lines 'above' the input were entered then it is a box*/
		{
			if (turn % 2 == 1)
			{
				names[coordinate2 - 1][coordinate3 - 1] = 'B';
			}
			else
			{
				names[coordinate2 - 1][coordinate3 - 1] = 'A';
			}
		}
		if (horizental[coordinate2 - 2][coordinate3 - 1] == '-' && vertical[coordinate2 - 2][coordinate3 - 1] == '|' && vertical[coordinate2 - 2][coordinate3] == '|')/*this line checks if the horizental line and 2 vertical lines 'below' the input were entered then it is a box*/
		{
			if (turn % 2 == 1)
			{
				names[coordinate2 - 2][coordinate3 - 1] = 'B';
			}
			else
			{
				names[coordinate2 - 2][coordinate3 - 1] = 'A';
			}
		}
		if (horizental[coordinate2 - 2][coordinate3 - 1] == '-' && horizental[coordinate2][coordinate3 - 1] == '-' && vertical[coordinate2 - 2][coordinate3 - 1] == '|' && vertical[coordinate2 - 2][coordinate3] == '|' && vertical[coordinate2 - 1][coordinate3 - 1] == '|' && vertical[coordinate2 - 1][coordinate3] == '|')
		{/*the condition above is for the times that 2 horizental lines (below and above the input) and 4 vertical lines (below and above the input) were entered then it creates two boxes and in those boxes types the name of the player*/
			if (turn % 2 == 1)
			{
				names[coordinate2 - 2][coordinate3 - 1] = 'B';
			}
			else
			{
				names[coordinate2 - 2][coordinate3 - 1] = 'A';
			}
		}

	}
	if (coordinate1 == 1)/*if the last input was vertical*/
	{
		if (vertical[coordinate2 - 1][coordinate3] == '|' && horizental[coordinate2 - 1][coordinate3 - 1] == '-' && horizental[coordinate2][coordinate3 - 1] == '-')/*this line checks if the vertical line and 2 horizental lines 'left' of the input were entered then it is a box*/
		{
			if (turn % 2 == 1)
			{
				names[coordinate2 - 1][coordinate3 - 1] = 'B';
			}
			else
			{
				names[coordinate2 - 1][coordinate3 - 1] = 'A';
			}
		}
		if (vertical[coordinate2 - 1][coordinate3 - 2] == '|' && horizental[coordinate2 - 1][coordinate3 - 2] == '-' && horizental[coordinate2][coordinate3 - 2] == '-')/*this line checks if the vertical line and 2 horizental lines 'right' of the input were entered then it is a box*/
		{
			if (turn % 2 == 1)
			{
				names[coordinate2 - 1][coordinate3 - 2] = 'B';
			}
			else
			{
				names[coordinate2 - 1][coordinate3 - 2] = 'A';
			}
		}
		if (vertical[coordinate2 - 1][coordinate3 - 2] == '|' && vertical[coordinate2 - 1][coordinate3] == '|' && horizental[coordinate2 - 1][coordinate3 - 2] == '-' && horizental[coordinate2][coordinate3 - 2] == '-' && horizental[coordinate2 - 1][coordinate3 - 1] == '-' && horizental[coordinate2][coordinate3 - 1] == '-')
		{/*the condition above is for the times that 2 vertical lines (left and right of the input) and 4 horizental lines (left and right of the input) were entered then it creates two boxes and in those boxes types the name of the player*/
			if (turn % 2 == 1)
			{
				names[coordinate2 - 1][coordinate3 - 2] = 'B';
			}
			else
			{
				names[coordinate2 - 1][coordinate3 - 2] = 'A';
			}
		}
	}
}