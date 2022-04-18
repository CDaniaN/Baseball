#ifndef BPLAYER_H
#define BPLAYER_H
#include <iostream>
#include <string>
using namespace std;

class BaseBallPlayer
{
	private:
		string role;
		int ID;
		double batAve;
	public:
		BaseBallPlayer()
		{
			role = "Catcher";
			ID = 999;
			batAve = 0.5;
		}
		BaseBallPlayer(int id, double bAve)
		{
			ID = id;
			batAve = bAve;
		}
		BaseBallPlayer(double bAve)
		{
			ID = 999;
			batAve = bAve;
		}
		BaseBallPlayer(int id)
		{
			ID = id;
			batAve = 0.5;
		}
		string getRole()
		{
			return role;
		}
		int getID()
		{
			return ID;
		}
		double getbatAve()
		{
			return batAve;
		}
};

#endif