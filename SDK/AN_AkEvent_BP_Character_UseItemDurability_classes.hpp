#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4C - 0x4C)
// BlueprintGeneratedClass AN_AkEvent_BP_Character_UseItemDurability.AN_AkEvent_BP_Character_UseItemDurability_C
class UAN_AkEvent_BP_Character_UseItemDurability_C : public UAN_AkEvent_BP_Character_C
{
public:

	static class UClass* StaticClass();
	static class UAN_AkEvent_BP_Character_UseItemDurability_C* GetDefaultObj();

	void ApplyAdditionalRTPCs(class USkeletalMeshComponent* MeshComponent, class UAkComponent* AkComponent, double Durability, class AEquippableItem* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, const struct FItemInstanceDurabilityData& CallFunc_TryGetItemDurability_Durability, enum class EGetResult CallFunc_TryGetItemDurability_Branches, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, double K2Node_VariableSet_Durability_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast);
};

}


