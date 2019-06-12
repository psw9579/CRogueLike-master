#include "Engine.h"
#include "Player.h"
#include "Map.h"
#include "Util.h"

#define LEFT   75      // ��������Ű 
#define RIGHT  77      // ��������Ű 
#define UP     72      // ���ʹ���Ű 
#define DOWN   80      // �Ʒ�����Ű


int main()
{
	Engine* engine = new Engine();
	engine->Run();

	delete engine;
	return 0;
}