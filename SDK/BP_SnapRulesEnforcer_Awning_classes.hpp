#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x54 - 0x54)
// BlueprintGeneratedClass BP_SnapRulesEnforcer_Awning.BP_SnapRulesEnforcer_Awning_C
class UBP_SnapRulesEnforcer_Awning_C : public UBP_SnapRulesEnforcer_C
{
public:

	static class UClass* StaticClass();
	static class UBP_SnapRulesEnforcer_Awning_C* GetDefaultObj();

	void GetAcceptableQuadrants(const struct FGridPoint& TargetPoint, TSet<enum class ESnapPointQuadrant>* AcceptableQuadrants, bool CallFunc_IsAwningSnapType_IsAwning, TSet<enum class ESnapPointQuadrant> CallFunc_GetAcceptableQuadrants_AcceptableQuadrants, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set, enum class ESnapPointQuadrant CallFunc_GetMirrorQuadrant_ReturnValue, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set_1, bool K2Node_SwitchEnum_CmpSuccess);
};

}


