#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x58 - 0x50)
// BlueprintGeneratedClass BP_InteractionObject_EnterCraftingStation.BP_InteractionObject_EnterCraftingStation_C
class UBP_InteractionObject_EnterCraftingStation_C : public UBP_StructureInteractionObject_C
{
public:
	struct FGameplayTag                          TAG_CRAFTINGSTATION_APPLYEFFECT;                   // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InteractionObject_EnterCraftingStation_C* GetDefaultObj();

	void ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
};

}


