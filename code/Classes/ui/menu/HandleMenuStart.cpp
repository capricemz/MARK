#include "HandleMenuStart.h"
#include "core/ManagerHandle.h"
#include "model/define/DefinesValue.h"

HandleMenuStart::HandleMenuStart() : _layerMenuStart(nullptr)
{
}

HandleMenuStart::~HandleMenuStart()
{
	_layerMenuStart = nullptr;
}

bool HandleMenuStart::init()
{
	auto isInit = false;

	do 
	{
		isInit = true;
	} while (0);

	return isInit;
}

void HandleMenuStart::gameStart()
{
	auto manager = ManagerHandle::getInstance();
	manager->notify((int)ID_OBSERVER::HANDLE_LAYER_ENTITY, TO_HANDLE_LAYER_ENTITY::START_ENGINE);
	manager->notify((int)ID_OBSERVER::HANDLE_SCENE_MAIN, TO_HANDLE_SCENE_MAIN::LAYER_MENU_SYSTEM_ADD);
	manager->notify((int)ID_OBSERVER::HANDLE_SCENE_MAIN, TO_HANDLE_SCENE_MAIN::LAYER_MENU_START_REMOVE);
}

void HandleMenuStart::gameSaveLoad()
{
	/*auto manager = ManagerHandle::getInstance();
	manager->notify((int)ID_OBSERVER::HANDLE_LAYER_ENTITY, TO_HANDLE_LAYER_ENTITY::CREATE_WORLD);*///fortest
}

void HandleMenuStart::gameSetting()
{

}
