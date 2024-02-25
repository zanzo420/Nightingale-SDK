#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xBC - 0xB8)
// BlueprintGeneratedClass AIA_NPCVillager_HammerRepair.AIA_NPCVillager_HammerRepair_C
class UAIA_NPCVillager_HammerRepair_C : public UAIA_CreatureBase_C
{
public:
	float                                        Desired_Search_Radius;                             // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_NPCVillager_HammerRepair_C* GetDefaultObj();

	float GetNormalizedScore(class AActor* Target, double CallFunc_GetNormalizedDistanceScore_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_GetNormalizedDistanceScore_MaxDistance_ImplicitCast);
	bool CheckTargetRequirements(class AActor* Target, class ANWXStructure* LStructure, bool CallFunc_CheckTargetRequirements_ReturnValue, TScriptInterface<class IAIStructureTargetProvider> CallFunc_GetClosestDamagedTargetData_self_CastInput, const struct FAIStructureTargetData& CallFunc_GetClosestDamagedTargetData_OutTargetData, bool CallFunc_GetClosestDamagedTargetData_ReturnValue, TScriptInterface<class IStructureHealthInterface> CallFunc_GetMaxHealth_self_CastInput, float CallFunc_GetMaxHealth_ReturnValue, TScriptInterface<class IStructureHealthInterface> CallFunc_GetCurrentHealth_self_CastInput, float CallFunc_GetCurrentHealth_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, TScriptInterface<class IStructureStateInterface> CallFunc_GetSchematicState_self_CastInput, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast_1);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_CheckStaticTargetRequirements_ReturnValue, bool CallFunc_IsAnyKindOfStructureObject_IsValidStructure);
};

}


