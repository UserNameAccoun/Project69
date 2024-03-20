#include <Windows.h>
#include <iostream>
#include <tchar.h>
#include <vector>
//Создаем дефайн для элемента управления кнопки
#define ID_BTN 1

HINSTANCE hInst;

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	std::vector<HWND> str_mass = {};
	switch (message)
	{
	case WM_CREATE:
	{
		//Создаем поле для ввода текста
		HWND hEdit;
		hEdit = CreateWindowEx(
			WS_EX_TRANSPARENT, TEXT("Edit"),
			L"Введите текст", WS_CHILD | ES_LEFT | WS_BORDER,
			5, 5, 470, 40,
			hWnd, NULL,
			NULL, NULL
		);
		//Создаем кнопку
		//Первый ряд
		{
			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"%", WS_CHILD,
				5, 55, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"CE", WS_CHILD,
				125, 55, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"C", WS_CHILD,
				245, 55, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"<--", WS_CHILD,
				365, 55, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);
		}
		//Второй ряд
		{
			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"1/X", WS_CHILD,
				5, 105, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"x^2", WS_CHILD,
				125, 105, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"sqrt(x)", WS_CHILD,
				245, 105, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"/", WS_CHILD,
				365, 105, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);
		}
		//Третий ряд
		{
			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"7", WS_CHILD,
				5, 155, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"8", WS_CHILD,
				125, 155, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"9", WS_CHILD,
				245, 155, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"*", WS_CHILD,
				365, 155, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);
		}
		//Четвертый ряд
		{
			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"4", WS_CHILD,
				5, 205, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"5", WS_CHILD,
				125, 205, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"6", WS_CHILD,
				245, 205, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"-", WS_CHILD,
				365, 205, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);
		}
		//Пятый ряд
		{
			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"1", WS_CHILD,
				5, 255, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"2", WS_CHILD,
				125, 255, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"3", WS_CHILD,
				245, 255, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"+", WS_CHILD,
				365, 255, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);
		}
		//Шестой ряд
		{
			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"+/-", WS_CHILD,
				5, 305, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"0", WS_CHILD,
				125, 305, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L",", WS_CHILD,
				245, 305, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);

			str_mass.emplace_back();
			str_mass.back() = CreateWindowEx(
				WS_EX_TRANSPARENT, TEXT("Button"),
				L"=", WS_CHILD,
				365, 305, 110, 40,
				hWnd, (HMENU)ID_BTN,
				NULL, NULL
			);
		}
		for (auto bt : str_mass)
		{
			ShowWindow(bt, SW_SHOW);
			UpdateWindow(bt);
		}

		ShowWindow(hEdit, SW_SHOW);
		UpdateWindow(hEdit);

		break;
	}
		//Создаем кейс который убирает задний фон
	case WM_CTLCOLORSTATIC:
	{
		HDC hdcStatic = (HDC)wParam;
		SetBkMode(hdcStatic, TRANSPARENT);
		return (INT_PTR)(HBRUSH)GetStockObject(NULL_BRUSH);
	}
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
		break;
	}
}



static TCHAR SWClass[] = L"Simple Window";

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	hInst = hInstance;

	WNDCLASSEX wc;

	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(wc.hInstance, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = SWClass;
	wc.hIconSm = LoadIcon(wc.hInstance, IDI_APPLICATION);

	if (!RegisterClassEx(&wc))
	{
		MessageBox(NULL, L"Ошибка регистрации класса", L"Ошибка", NULL);
		return -1;
	}

	int width = 500, length = 405;

	HWND hWnd = CreateWindowEx(
		WS_EX_OVERLAPPEDWINDOW,
		SWClass, L"Основное окно",
		WS_OVERLAPPEDWINDOW,
		1280 - width/2, 720 - length / 2,
		width, length,
		NULL,
		NULL,
		hInstance,
		NULL
	);
	if (!hWnd)
	{
		MessageBox(NULL, L"Ошибка создания окна", L"Ошибка", NULL);
		return -2;
	}
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);
	MSG msg;

	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return (int)msg.wParam;
}