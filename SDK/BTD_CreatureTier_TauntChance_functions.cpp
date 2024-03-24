#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_CreatureTier_TauntChance.BTD_CreatureTier_TauntChance_C
// (None)

class UClass* UBTD_CreatureTier_TauntChance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_CreatureTier_TauntChance_C");

	return Clss;
}


// BTD_CreatureTier_TauntChance_C BTD_CreatureTier_TauntChance.Default__BTD_CreatureTier_TauntChance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_CreatureTier_TauntChance_C* UBTD_CreatureTier_TauntChance_C::GetDefaultObj()
{
	static class UBTD_CreatureTier_TauntChance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_CreatureTier_TauntChance_C*>(UBTD_CreatureTier_TauntChance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_CreatureTier_TauntChance.BTD_CreatureTier_TauntChance_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        LDifficulty                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LHero                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentRealmDifficulty_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        CallFunc_GetCurrentRealmDifficulty_Realm_Difficulty              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             K2Node_DynamicCast_AsNWXAICharacter                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_5                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_6                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_7                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTD_CreatureTier_TauntChance_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, enum class ERealmDifficulty LDifficulty, bool LHero, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_GetCurrentRealmDifficulty_Success, enum class ERealmDifficulty CallFunc_GetCurrentRealmDifficulty_Realm_Difficulty, class ANWXAICharacter* K2Node_DynamicCast_AsNWXAICharacter, bool K2Node_DynamicCast_bSuccess, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue_4, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_RandomFloatInRange_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_5, double CallFunc_RandomFloatInRange_ReturnValue_6, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_6, double CallFunc_RandomFloatInRange_ReturnValue_7, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_CreatureTier_TauntChance_C", "PerformConditionCheckAI");

	Params::UBTD_CreatureTier_TauntChance_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.LDifficulty = LDifficulty;
	Parms.LHero = LHero;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetCurrentRealmDifficulty_Success = CallFunc_GetCurrentRealmDifficulty_Success;
	Parms.CallFunc_GetCurrentRealmDifficulty_Realm_Difficulty = CallFunc_GetCurrentRealmDifficulty_Realm_Difficulty;
	Parms.K2Node_DynamicCast_AsNWXAICharacter = K2Node_DynamicCast_AsNWXAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_2 = CallFunc_LessEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_4 = CallFunc_RandomFloatInRange_ReturnValue_4;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_3 = CallFunc_LessEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_4 = CallFunc_LessEqual_DoubleDouble_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_5 = CallFunc_RandomFloatInRange_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_5 = CallFunc_LessEqual_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_6 = CallFunc_RandomFloatInRange_ReturnValue_6;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_6 = CallFunc_LessEqual_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_7 = CallFunc_RandomFloatInRange_ReturnValue_7;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_7 = CallFunc_LessEqual_DoubleDouble_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


