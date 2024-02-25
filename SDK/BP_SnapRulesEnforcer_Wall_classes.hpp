#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x54 - 0x54)
// BlueprintGeneratedClass BP_SnapRulesEnforcer_Wall.BP_SnapRulesEnforcer_Wall_C
class UBP_SnapRulesEnforcer_Wall_C : public UBP_SnapRulesEnforcer_C
{
public:

	static class UClass* StaticClass();
	static class UBP_SnapRulesEnforcer_Wall_C* GetDefaultObj();

	void GetAcceptableQuadrants(const struct FGridPoint& TargetPoint, TSet<enum class ESnapPointQuadrant>* AcceptableQuadrants, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set, bool CallFunc_IsRoofFillerSnapType_IsRoofFiller, bool CallFunc_IsRoofConvexSnapType_IsRoofConvex, bool CallFunc_IsRoofFlatSnapType_IsRoofFlat, bool CallFunc_IsRoofAngleSnapType_IsRoofAngle, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsWallSnapType_IsWall, bool CallFunc_IsFoundationSnapType_IsFoundation, enum class ESnapPointQuadrant CallFunc_GetMirrorQuadrant_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set_1, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set_2, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set_3, TSet<enum class ESnapPointQuadrant> CallFunc_GetAcceptableQuadrants_AcceptableQuadrants, enum class ESnapPointQuadrant CallFunc_GetMirrorQuadrant_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set_4);
};

}


