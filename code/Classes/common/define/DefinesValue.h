#pragma execution_character_set("utf-8")

#ifndef __COMMON_DEFINE_DEFINES_VALUE_H__
#define __COMMON_DEFINE_DEFINES_VALUE_H__

#define TIME_LAST_SAVE_INTERVAL 300
#define TIME_OFF_LINE_MAX 172800
#define TRAINING_NUM_RST_INTERVAL 3600
#define TRAINING_NUM_RST_VALUE 1

#define DATA_UNLOCK_INIT_MAID 1000//��ʼ��ʱĬ�Ͻ�����Ů��
#define DATA_UNLOCK_INIT_LEVEL 1000//��ʼ��ʱĬ�Ͻ����Ĺؿ�

#define ID_GRADE_FIRST 1000//��һ���ȼ�id

#define GRID_SELECT_MAX 9
#define GRID_SELECTED_MAX 3
#define ENTITY_BATTLE_MAX 3

#define ENERGY_SWITCH_ENTITY 8

#define BREAK_DAMAGE_TAKES 5

#define LENGTH_INFO_THING 2
#define LENGTH_INFO_CATCH_MST 4

#define TRAINING_NUM_MAX 3

#define vecPostionGridBattle \
{ \
	Vec2(160.0f, 620.0f), Vec2(480.0f, 340.0f), Vec2(320.0f, 480.0f) \
}

#define dicAnchorPoint2BubbleAnchorPoint \
{ \
	{ Vec2::ANCHOR_BOTTOM_LEFT, Vec2(1.0f, 1.0f) }, { Vec2::ANCHOR_BOTTOM_RIGHT, Vec2(0.0f, 1.0f) }, { Vec2::ANCHOR_TOP_RIGHT, Vec2(0.0f, 0.0f) }, { Vec2::ANCHOR_TOP_LEFT, Vec2(1.0f, 0.0f) } \
}

#define dicAnchorPoint2BubbleBgScale \
{ \
	{ Vec2::ANCHOR_BOTTOM_LEFT, Vec2(1.0f, 1.0f) }, { Vec2::ANCHOR_BOTTOM_RIGHT, Vec2(-1.0f, 1.0f) }, { Vec2::ANCHOR_TOP_RIGHT, Vec2(-1.0f, -1.0f) }, { Vec2::ANCHOR_TOP_LEFT, Vec2(1.0f, -1.0f) } \
}

#define sizeSkillIcon Size(100.0f, 100.0f)
#define sizeSkillAttribute Size(55.0f, 55.0f)
#define sizeStarLevels Size(20.0f, 20.0f)
#define sizeStarTrainingLv Size(50.0f, 50.0f)
#define sizeStarBattleResult Size(114.0f, 110.0f)

#define moveDistanceVictoryDefeat Vec2(0.0f, 345.0f)
#define vecMoveDistanceSpriteMaid \
{ \
	Vec2(470.0f, 0.0f), Vec2(280.0f, 0.0f), Vec2(-240.0f, 0.0f) \
}
#define moveDistanceGradeUp Vec2(0.0f, 255.0f)

enum class TypeLoadState
{
	UNLOAD,//δ����
	LOADING,//������
	LOADED//�������
};

enum class IdAttribute
{
	ATTRIBUTE_NONE,

	ENTITY_HP = 100,//Ѫ��
	ENTITY_HP_MAX,//Ѫ������
	ENTITY_ENERGY,//����
	ENTITY_ENERGY_MAX,//��������
	ENTITY_PHYSICAL_ATTACK,//��������
	ENTITY_MAGIC_ATTACK,//ħ������
	ENTITY_GOLD_GENERATE,//���ɱ���
	ENTITY_GOLD_INCOME,//�������
	ENTITY_STONE_GENERATE,//����ʯͷ
	ENTITY_STONE_CRUSHED,//����ʯͷ
	ENTITY_ICE_GENERATE,//���ɱ���
	ENTITY_ICE_MELTING,//�ڻ�����
	ENTITY_TRAP_GENERATE,//��������
	ENTITY_TRAP_DISARM,//�������
	ENTITY_SWITCH,//�л���ɫ
	ENTITY_KILL_NUM,//��ɱ
	ENTITY_BREAK_CASE_NUM,//������´���
	ENTITY_BREAK_TAKES_NUM,//�ܵ����´���
	ENTITY_GOLD_INCOME_NUM,//����������
	ENTITY_STONE_CRUSHED_NUM,//����ʯͷ����
	ENTITY_ICE_MELTING_NUM,//�ڻ��������
	ENTITY_TRAP_DISARM_NUM,//����������
	ENTITY_PHYSICAL_ATTACK_EXTRA,//������������
	ENTITY_MAGIC_ATTACK_EXTRA,//����ħ������

	ENTITY_QUICK = 150,//���ٹ���
	ENTITY_DAMAGE_CASE,//����˺�
	ENTITY_DAMAGE_TAKES,//�ܵ��˺�
	ENTITY_RESTORE_HP,//�ָ�����
	ENTITY_COST_HP,//��������
	ENTITY_RESTORE_ENERGY,//�ָ�����
	ENTITY_COST_ENERGY,//��������
	ENTITY_RESTORE_HP_ALL,//ȫ��ָ�����
	ENTITY_COST_HP_ALL,//ȫ����������
	ENTITY_DAMAGE_CASE_EXTRA,//��������˺�
	ENTITY_DAMAGE_TAKES_EXTRA,//�����ܵ��˺�
	ENTITY_DAMAGE_BREAK_COUNT,//�����˺�����
	ENTITY_BREAK_TAKES,//�ܵ�����

	GRID_DAMAGE_PHYSICAL = 200,//�����˺�
	GRID_DAMAGE_MAGIC,//ħ���˺�
	GRID_DAMAGE_ANY,//�����˺�
	GRID_BLOCK_PHYSICAL,//�����ֵ�
	GRID_BLOCK_MAGIC,//ħ���ֵ�
	GRID_BLOCK_ANY,//����ֵ�
	GRID_UNBLOCKABLE,//���ɵֵ�
	GRID_QUICK,//���ٹ���
	GRID_RESTORE_HP,//�ָ�����
	GRID_COST_HP,//��������
	GRID_RESTORE_HP_CANCEL,//ȡ���ָ�����
	GRID_COST_HP_CANCEL,//ȡ����������
	GRID_RESTORE_ENERGY,//�ָ�����
	GRID_COST_ENERGY,//��������
	GRID_RESTORE_ENERGY_CANCEL,//ȡ���ָ�����
	GRID_COST_ENERGY_CANCEL,//ȡ����������
	GRID_RESTORE_HP_ALL,//ȫ��ָ�����
	GRID_COST_HP_ALL,//ȫ����������
	GRID_BLOCK_ALL,//�ֵ������˺�
	GRID_DAMAGE_PHYSICAL_EXTRA,//���������˺�
	GRID_DAMAGE_MAGIC_EXTRA,//����ħ���˺�

	GRID_GOLD = 250,//����
	GRID_STONE,//ʯͷ
	GRID_ICE,//����
	GRID_TRAP,//����
	GRID_GOLD_GET,//������
	GRID_STONE_CRUSHED,//ʯͷ����
	GRID_ICE_MELTING,//�����ڻ�
	GRID_TRAP_TRIGGER,//���崥��
	GRID_TRAP_DISARM,//������

	GRID_PHYSICAL_DAMAGE_SUCCESS = 300,//�����˺��ɹ�
	GRID_PHYSICAL_DAMAGE_FAILED,//�����˺�ʧ��
	GRID_PHYSICAL_BLOCK_SUCCESS,//�����ֵ��ɹ�
	GRID_PHYSICAL_BLOCK_FAILED,//�����ֵ�ʧ��
	GRID_MAGIC_DAMAGE_SUCCESS,//ħ���˺��ɹ�
	GRID_MAGIC_DAMAGE_FAILED,//ħ���˺�ʧ��
	GRID_MAGIC_BLOCK_SUCCESS,//ħ���ֵ��ɹ�
	GRID_MAGIC_BLOCK_FAILED,//ħ���ֵ�ʧ��
	GRID_ANY_DAMAGE_SUCCESS,//�����˺��ɹ�
	GRID_ANY_DAMAGE_FAILED,//�����˺�ʧ��
	GRID_ANY_BLOCK_SUCCESS,//����ֵ��ɹ�
	GRID_ANY_BLOCK_FAILED,//����ֵ�ʧ��
	GRID_N_PHYSICAL_DAMAGE,//���n�������˺�//nΪ0��ʾÿ��
	GRID_N_PHYSICAL_TAKES,//�ܵ�n�������˺�//nΪ0��ʾÿ��
	GRID_N_PHYSICAL_BLOCK,//�ֵ�n�������˺�//nΪ0��ʾÿ��
	GRID_N_MAGIC_DAMAGE,//���n��ħ���˺�//nΪ0��ʾÿ��
	GRID_N_MAGIC_TAKES,//�ܵ�n��ħ���˺�//nΪ0��ʾÿ��
	GRID_N_MAGIC_BLOCK,//�ֵ�n��ħ���ֵ�//nΪ0��ʾÿ��
	GRID_N_ANY_DAMAGE,//���n�������˺�//nΪ0��ʾÿ��
	GRID_N_ANY_TAKES,//�ܵ�n�������˺�//nΪ0��ʾÿ��
	GRID_N_ANY_BLOCK,//�ֵ�n�������˺�//nΪ0��ʾÿ��
	GRID_OWN_UNBLOCKABLE,//ӵ�в��ɵֵ�
	GRID_TAKEN_UNBLOCKABLE,//�ܵ����ɵֵ�
	GRID_OWN_QUICK,//ӵ�п��ٹ���
	GRID_TAKEN_QUICK,//�ܵ����ٹ���
	GRID_CERTAINLY,//һ������
	GRID_UNOWN_UNBLOCKABLE,//��ӵ�в��ɵֵ�
	GRID_UNTAKEN_UNBLOCKABLE,//���ܵ����ɵֵ�
	GRID_UNOWN_QUICK,//��ӵ�п��ٹ���
	GRID_UNTAKEN_QUICK,//���ܵ����ٹ���
	GRID_OWN_RESTORE_HP,//ӵ�лָ�����
	GRID_OWN_COST_HP,//ӵ����������

	GRID_EFFECTIVE_ROUND = 400,//��n����Ч//nΪ0��ʾ��ǰ�غ�
	GRID_EFFECTIVE_ROUND_COUNT,//����n����
	GIRD_EFFECTIVE_TO_OTHER,//�ԶԷ�
	GRID_EFFECTIVE_EACH//ÿ��
};

enum class TypeAttribute
{
	NONE,
	ENTITY,//ʵ������
	GRID_BASE,//���ӻ�������
	GRID_IF,//������������
	GRID_COMPLEX,//���Ӹ�������
};

enum class TypeEntity
{
	NONE,
	MAID,//Ů��
	MONSTER//����
};

enum class TypeJob
{
	NONE,
	ROGUE,//����
	WARRIOR,//սʿ
	MAGE,//��ʦ
	TREAT,//����
	TANK,//̹��
	ARCHER//����
};

enum class TypeSkill
{
	NONE,
	BASE,
	SPECIAL,
	ENERGY,
	PASSIVE,//����
	RANDOM//���
};

enum class TypeSkillGroup
{
	NONE,
	HP_PERCENT,//Ѫ���ٷֱ�
	ENERGY_VALUE,//����ֵ
	ROUND_TOTAL,//�ܻغ�
	ROUND,//�غ�
};

enum class TypeLevelState
{
	NONE,
	PASSED,//��ͨ��
	CURRENT,//��ǰ
	LOCK//δ����
};

enum class TypeLevelTarget
{
	NONE,
	HP_MST,//Ѫ������ �������ڣ�����С��
	HP_MAID,//Ѫ��Ů�� �������ڣ�����С��
	PASS,//ͨ��
	KILL,//��ɱ
	BREAK,//����
	GOLD,//��ý��
	STONE,//����ʯͷ
	ICE,//�ڻ�����
	TRAP//�������
};

enum class TypeUnlock
{
	LAST_NEXT
};

enum class TypeNodeHead
{
	NONE,
	LARGE,
	MIDDLE,
	SMALL
};

enum class TypeSRP
{
	NONE,
	SCISSORS,
	ROCK,
	PAPER
};

enum class TypeTrianing
{
	NONE,
	WAY0,//����
	WAY1,//��ˢ
	WAY2,//��װ
};

enum class IdThing
{
	THING_NONE,

	GOLD = 100,//���
	DIAMOND,//��ʯ
	EXP,//����
	TRAINING,//����
	DATING,//Լ��

	TOOTHBRUSH = 200,//��ˢ

	CLOTH = 300,//ʱװ
};

enum class TypeConfirms
{
	MAP_TRANSFER,
	OFF_LINE_DROP,
	BUY_ACTION_POINT,
	BUY_CARRIAGE,
	BUY_MAID_CLOTHS
};

enum class TypeTips
{
	ERRORS,
	THING_UNLOCK,
	MONSTER,
	THING,
	SKILL,
	TARGET_AWARD
};

enum class TypeScene
{
	WELCOME,
	PLOT,
	MAIN,
};

enum class ID_OBSERVER
{
	HANDLE_SCENE_GAME,
	HANDLE_LAYER_ENTITY
};

enum class TO_HANDLE_SCENE_GAME
{
	LAYER_RES_LOAD_ADD,
	LAYER_RES_LOAD_REMOVE,
	LAYER_ENTITY_ADD,
	LAYER_ENTITY_REMOVE,
	LAYER_MENU_START_ADD,
	LAYER_MENU_START_REMOVE,
	LAYER_MENU_SYSTEM_ADD,
	LAYER_MENU_SYSTEM_REMOVE
};

enum class TO_HANDLE_LAYER_ENTITY
{
	ENTITY_CREATED,
	GAME_START,
	GAME_STOP
};

enum class TYPE_OBSERVER_SCENE_MAIN
{
	UPDATE_LAYOUT_TOP,
	SWITCH_LAYER,

	SHOW_NONE = 10,
	SHOW_GUILD,
	SHOW_SKILLS,
	SHOW_SHOP,
	SHOW_TRAINING,
	SHOW_LEVELS,
	SHOW_BATTLE
};

enum class TYPE_OBSERVER_LAYER_BATTLE
{
	SHOW_APPEAR_GRID_SELECTED_MST,//��ʾ����ѡ�и��ӳ��ֶ���
	SHOW_LAYER_GRID_SELECT,//���Ӹ���ѡ��㣬��ʾ���ֶ���
	SHOW_APPEAR_GRID_SELECT_MAID,//��ʾŮ��ѡ����ӳ��ֶ���
	HIDE_LAYER_GRID_SELECT,//�Ƴ�����ѡ��㣬��ʾ��ʧ����
	UPDATE_TXT_ROUND,
	SHOW_LAYER_CATCH,
	SHOW_LAYER_BATTLE_RESULT,
	SHOW_LAYER_GRADE_UP,
	RESET_SKIN
};

enum class TYPE_OBSERVER_LAYER_GRID_SHOW
{
	RUN_MAID_GRID_MOVE_FROM_ACTION,
	HIDE_BG,//����չʾ����
	CLOSE
};

enum class TYPE_OBSERVER_LAYER_GRID_SELECT
{
	RUN_MAID_GRID_MOVE_FROM_ACTION_ONE_BACK,
	RUN_MAID_GRID_MOVE_FROM_ACTION_ALL_BACK,
	RUN_MAID_GRID_MOVE_FROM_ACTION_TAKE_BACK,
	RUN_MAID_GRID_PLAY_SPECIAL_STH_GENERATE,
	RUN_MAID_GRID_SCALE_BIG,
	RUN_MAID_GRID_SCALE_SMALL
};

enum class TYPE_OBSERVER_HANDLE_GRID
{
	RUN_ACTION_GRID_SELECTED_MOVE_FROM_SELECT,//��ʾŮ�͸��Ӵ�ѡ������ƶ���ѡ�и��ӵĶ���
	RUN_GRID_MOVE_AND_THROW,//�ֿ�ʼִ��
	UPDATE_GRID
};

enum class TYPE_OBSERVER_HANDLE_HEAD
{
	UPDATE_HP,//�������Ƿ�Ϊ����
	UPDATE_HP_ALL,//�������Ƿ�Ϊ����
	SHOW_WORDS_DRIFT,//const bool &isMst, const int &indexNodeHead, const int &valueChange, const IdAttribute &idAttributeBeChange, const Color4B &color, const double &duration
	SHOW_WORDS_DRIFT_ALL,//const bool &isMst, const int &valueChange, const IdAttribute &idAttributeBeChange, const Color4B &color, const double &duration
	UPDATE_ENERGY,//�������Ƿ�Ϊ����
	SWITCH_NODE_HEAD_TO,//�������Ƿ�Ϊ����л�Ŀ��index
	SWITCH_LAYOUT_HEAD_MAID_TOUCHABLE//�������Ƿ�ɴ���
};

enum class TYPE_OBSERVER_LAYER_GUILD
{
	SWITCH_LAYOUT,//�л���ʾ����

	LAYOUT_SELECT = 10,
	LAYOUT_DATING,
	LAYOUT_RESULT
};

enum class TYPE_OBSERVER_HANDLE_ENTITY
{
	RUN_ENTITY_APPEAR,
	RUN_ENTITY_ACTION,
	DEAL_ROUND_OVER,
	UPDATE_HP,
	UPDATE_ENERGY
};

#define  dicTypeLevelTarget2IdAttribute \
{ \
	{ TypeLevelTarget::KILL, IdAttribute::ENTITY_KILL_NUM }, \
	{ TypeLevelTarget::BREAK, IdAttribute::ENTITY_BREAK_CASE_NUM }, \
	{ TypeLevelTarget::GOLD, IdAttribute::ENTITY_GOLD_INCOME_NUM }, \
	{ TypeLevelTarget::STONE, IdAttribute::ENTITY_STONE_CRUSHED_NUM }, \
	{ TypeLevelTarget::ICE, IdAttribute::ENTITY_ICE_MELTING_NUM }, \
	{ TypeLevelTarget::TRAP, IdAttribute::ENTITY_TRAP_DISARM_NUM } \
}

#define EVENT_LAYER_LOGO_OVER "event_layer_logo_over"
#define EVENT_LAYER_RES_LOAD_LOADED "event_layer_res_load_loaded"

#endif