#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

void resizeConsole(int, int);
void gotoxy(int, int);
void XoaManHinh();
void textcolor(int);

void resizeConsole(int width, int height) {
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}

void gotoxy(int x, int y) {
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = {x-1, y-1};
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

void XoaManHinh() {
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

void textcolor(int x) {
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}

int main()
{
	resizeConsole(800, 700);
	textcolor(10);
	gotoxy(10,5);
	cout << "\n\t \4 Hom ni be Coc buoc vao tuoi 18\n";
	cout << "\n\t  \4 Danh dau buoc chuyen tu tre trau.. sang tre gia.. =))";
	gotoxy(15,10);
	printf("\n\t    \3\3 Sinh nhat vui ve nha !!! \3\3");
	printf("\n\n\t    \3 Khong nghi ra duoc cai gi het... nen lam cai nay..\n");
	
	gotoxy(15,15);
	
	printf("\n\n\t\t  \3 May cai tiep theo... han thu vi hon.. =))) ");
	
	printf("\n\n\n\t\t           *  * . * . * . * . *  *               ");
		printf("\n\t\t         *  *                   *  *             ");
		printf("\n\t\t       *   *                     *   *           ");
		printf("\n\t\t      *   *   * *          * *    *   *          ");
		printf("\n\t\t       * *   *   *        *   *    * *           ");
		printf("\n\t\t         *        . . . . .        *             ");
		printf("\n\t\t         *       . ^     ^ .       *             ");
		printf("\n\t\t          *       . . . . .       *              ");
		printf("\n\t\t            * . . . .  . . . . .*                ");
	cout << "\n\n\n";
	system("pause");
	
	char pw[20];
nhaplai:
	system("cls");
	
	textcolor(14);
	gotoxy(10,10);
	cout << "*";
	
	gotoxy(50,10);
	cout << "*";
	
	gotoxy(30,12);
	cout << "*";
	
	gotoxy(60,15);
	cout << ".";
	
	gotoxy(20,5);
	cout << ".";
	
	gotoxy(70,8);
	cout << "*";

	textcolor(10);
	gotoxy(20, 20);
	printf("\n\t  \6 Hay nhap vao cau 'oi lam coc thay vui lam' roi ENTER..");
	cout << "\n\n\t\t\6 Nhap sai la khong duoc dau =)))\n\n\t\t";
	printf("    \6 Nhap zo day !!: ");
	gets(pw);
		
	if (strcmp(pw, "oi lam coc thay vui lam"))
	{
		printf("\n\t\t Doc ki lai di =))).. Nhap cho dung vao =)))");
		Sleep(3000);
		goto nhaplai;
	}
	
	system("cls");
	gotoxy(5,10);
	textcolor(13);
	ifstream FileIn;
	FileIn.open("HPBD.txt", ios::in);
	while(!FileIn.eof())
	{
		char c;
		FileIn.get(c);
		Sleep(30);
		cout << c;
	}
	FileIn.close();
	Sleep(3000);
	system("cls");
	
	textcolor(10);
	int i;
	for(i = 1;i <= 100;++i)
	{
		system("cls");
		printf("\n\t\t\4\4\4\4...........................................\4\4\4\4");
		printf("\n\n\t\t\t\3\3Send from...........Your Oi\3\3");
		printf("\n\n\t\t\t     Sinh Nhat Vui Ve.. !!! \3\3\3");
		cout<<"\n\n\t\t\t\tLoading..."<< i << " %";
		printf("\n\n\t\t\4\4\4\4...........................................\4\4\4\4");
	
		if(i == 2)
		{
			printf("\n\n\n\t\t\t\t    \4\4 M \4\4");
			printf("\n\n\n\t      \3\3 Hom ni vao 18 nam truoc.. La ngay Coc lot ra ngoai.. \3\3");
			Sleep(5000);
		}
		if(i == 9)
		{
			printf("\n\n\n\t\t\t\t    \4\4 MI \4\4");
			printf("\n\n\n\t       \3 Mot ngay.. chac cung dac biet..");
			printf("\n\n\n\t      \3 Nen muon lam mot thu dac biet.. de khi nho lai hom SN 18+..");
			cout << "\n\n\n\t\tCo cai de khoe =)))";
			printf("\n\n\n\t     \3 Dung nhu hom SN cua Oi.. troi qua ko co cai chi dac biet \1\1");
			Sleep(16000);
		}
		if(i == 12)
		{
			printf("\n\n\n\t\t\t\t    \4\4 MIS \4\4");
			printf("\n\n\n\t\t  \3\3 Sinh vien ngheo.. ko co cai chi dac biet de tang..");
			cout << "\n\n\n\t\t   \3\3 Chi co cai y tuong.. nen lam cai ni =)))";
			Sleep(8000);
		}
		if(i == 15)
		{
			printf("\n\n\n\t\t\t\t    \4\4 MISS \4\4");
			printf("\n\n\n\t\t    \3 Chiu kho doc nghe !! ");
			printf("\n\n\n\t\t     \3 Day ko chac la mon qua dep nhat ma Coc dc nhan.. ");
			Sleep(10000);
		}
		if(i == 30)
		{
			printf("\n\n\n\t\t\t\t    \4\4 MISS M \4\4");
			printf("\n\n\n\t\t     \3 Nhung tui chac chan voi Coc.. ");
			cout << "\n\n\n\t\t      \3 Day la mon qua DOC nhat.. Coc nhan dc.. ";
			Sleep(10000);
		}
		if(i == 50)
		{
day:
			printf("\n\n\n\t\t\t\t    \4\4 MISS ME \4\4");
			printf("\n\n\n\t\t     \3 Coc xinh roi.. khoi can chuc nghen");
			printf("\n\n\n\t\t      \3 Chuc nua.. ai chiu noi =)))");
			Sleep(10000);
		}
		if(i == 65)
		{
			printf("\n\n\n\t\t\t        \4\4 MISS ME FO \4\4");
			printf("\n\n\n\t\t\t  \3 A!! SN gan Noel nua.. =)))");
			printf("\n\n\n\t\t\t    \4\4 MERRY CHRISTMAS \4\4");
			Sleep(10000);
		}
		if(i == 76)
		{
			printf("\n\n\n\t\t\t  \4\4 MISS ME FORE \4\4");
			printf("\n\n\n\t\t         \3 Tang Qua Noel Cho Tui Di \3");
			printf("\n\n\n\t\t       \3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3");
			Sleep(5000);
		}
		if(i == 88)
		{
			printf("\n\n\n\t\t\t        \4\4 MISS ME FOREVER \4\4");
			printf("\n\n\n\t\t\t  \5 SN thi cung phai co banh kem..");
			printf("\n\n\n\t\t\t   \3\3 Tang Coc mot cai ne !!! \3\3");
			Sleep(9000);
		}
	}

	system("cls");

	cout << "\n\n\t\t         SINH NHAT VUI VE.. MY COC !!";
	cout << "\n\n\t\t    OI SE BAM COC TOI KHI GIAU MOI THOI !! \1\1\n\n";

	textcolor(13);
	cout << "\n\t                 )        )       )        )                  \n";
	cout << "\n\t                (*)      (*)     (*)      (*)                 \n";
	cout << "\n\t                 |        |       |        |                  \n";
	cout << "\n\t                |~|      |~|     |~|      |~|                 \n";
	cout << "\n\t                | |      | |     | |      | |                 \n";
	cout << "\n\t                | |      | |     | |      | |                 \n";
	cout << "\n\t            .**.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.              \n";
	cout << "\n\t            *    &                        &    *              \n";
	cout << "\n\t            *   & &        HAPPY         & &   *              \n";
	cout << "\n\t            *    &                        &    *              \n";
	cout << "\n\t        .**.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.          \n";
	cout << "\n\t        *                     ^^                   *          \n";
	cout << "\n\t        *                    ^  ^                  *          \n";
	cout << "\n\t        *       BIRTHDAY    ^    ^    COC          *          \n";
	cout << "\n\t        *                     ||                   *          \n";
	cout << "\n\t    .**.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.      \n";
	cout << "\n\t    *                                                  *      \n";
	cout << "\n\t    *                                                  *      \n";
	cout << "\n\t    *    15/12/1998         &&&&&         15/12/2016   *      \n";
	cout << "\n\t    *                                                  *      \n";
	cout << "\n\t    *                                                  *      \n";
	cout << "\n\t    *..*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*      \n";	
	
	cout << "\n";
	system("pause");
	return 0;
}
