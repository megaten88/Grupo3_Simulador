#include "Team.h"


Team::Team(){

}

Team::Team(string t_name, Coach* t_coach,std::vector<Player*> P_list,int def_lvl,double atk_lvl,int goals_if,int goals_a){
	this-> t_name = t_name;
	this-> t_coach = t_coach;
	this->P_list = P_list;
	this-> def_lvl = def_lvl;
	this-> atk_lvl = atk_lvl;
	this-> goals_if = goals_if;
	this-> goals_a = goals_a;
}


string Team::getT_Name(){
	return t_name;
}

void Team::setT_Name(string t_name){
	this->t_name=t_name;
}

Coach* Team::getT_coach(){
	return t_coach;
}

void Team::setT_coach(Coach* t_coach){
	this->t_coach=t_coach;
}

int Team::getDef_lvl(){
	return def_lvl;
}

void Team::setDef_lvl(int def_lvl){
	this->def_lvl=def_lvl;
}

double Team::getAtk_lvl(){
	return atk_lvl;
}

void Team::setAtk_lvl(double atk_lvl){
	this->atk_lvl=atk_lvl;
}


int Team::getGoal_if(){
	return goals_if;
}

int Team::getGoal_a(){
	return goals_a;
}

void Team::setGoal_a(int goals_a){
	this->goals_a=goals_a;
}

void Team::setGoal_if(int goals_if){
	this->goals_if=goals_if;
}
