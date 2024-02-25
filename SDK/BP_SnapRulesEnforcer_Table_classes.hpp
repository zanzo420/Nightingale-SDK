#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x54 - 0x54)
// BlueprintGeneratedClass BP_SnapRulesEnforcer_Table.BP_SnapRulesEnforcer_Table_C
class UBP_SnapRulesEnforcer_Table_C : public UBP_SnapRulesEnforcer_C
{
public:

	static class UClass* StaticClass();
	static class UBP_SnapRulesEnforcer_Table_C* GetDefaultObj();

	void GetAcceptableQuadrants(const struct FGridPoint& TargetPoint, TSet<enum class ESnapPointQuadrant>* AcceptableQuadrants, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set, bool CallFunc_IsDecorationSnapType_IsDecoration, TSet<enum class ESnapPointQuadrant> CallFunc_GetAcceptableQuadrants_AcceptableQuadrants);
};

}


