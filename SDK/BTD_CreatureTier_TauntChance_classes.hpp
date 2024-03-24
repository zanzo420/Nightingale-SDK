#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xE0 - 0xA0)
// BlueprintGeneratedClass BTD_CreatureTier_TauntChance.BTD_CreatureTier_TauntChance_C
class UBTD_CreatureTier_TauntChance_C : public UBTDecorator_BlueprintBase
{
public:
	double                                       EasyTauntChance;                                   // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MediumTauntChance;                                 // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HardTauntChance;                                   // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExtremeTauntChance;                                // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EasyHeroTauntChance;                               // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MediumHeroTauntChance;                             // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HardHeroTauntChance;                               // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExtremeHeroTauntChance;                            // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_CreatureTier_TauntChance_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, enum class ERealmDifficulty LDifficulty, bool LHero, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_GetCurrentRealmDifficulty_Success, enum class ERealmDifficulty CallFunc_GetCurrentRealmDifficulty_Realm_Difficulty, class ANWXAICharacter* K2Node_DynamicCast_AsNWXAICharacter, bool K2Node_DynamicCast_bSuccess, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_4, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_RandomFloatInRange_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_5, double CallFunc_RandomFloatInRange_ReturnValue_6, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_6, double CallFunc_RandomFloatInRange_ReturnValue_7, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_7);
};

}


