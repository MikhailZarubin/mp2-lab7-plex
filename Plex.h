#pragma once
#include<iostream>
#include<windows.h>
using namespace System::Drawing;

class TRoot
{
protected:
	bool active, visible;
public:
	TRoot();
	bool IsVisible();
	bool IsActive();
	virtual void show(Graphics^ gr) = 0;
	virtual void hide(Graphics^ gr) = 0;
};
class TPoint : public TRoot 
{
protected: 
	int x, y;
public:
	TPoint(int x1 = 0, int y1 = 0);
	void SetX(int val);
	void SetY(int val);
	int GetX() const;
	int GetY() const;
	void show(Graphics^ gr) override;
	void hide(Graphics^ gr) override;
};

