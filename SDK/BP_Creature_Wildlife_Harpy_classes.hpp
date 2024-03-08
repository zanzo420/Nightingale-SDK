#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8F (0x16A9 - 0x161A)
// BlueprintGeneratedClass BP_Creature_Wildlife_Harpy.BP_Creature_Wildlife_Harpy_C
class ABP_Creature_Wildlife_Harpy_C : public ABP_Creature_Wildlife_C
{
public:
	uint8                                        Pad_A420[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1620(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_LootGlow;                                       // 0x1628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Slobber;                                        // 0x1630(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AILoadoutComponentBase_C*          BP_AILoadoutComponentBase;                         // 0x1638(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     WP_Indicator1;                                     // 0x1640(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_Right;                                     // 0x1648(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Hand_Left;                                      // 0x1650(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Right;                                     // 0x1658(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Left;                                      // 0x1660(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Body;                                           // 0x1668(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Head;                                           // 0x1670(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInWorldItemContainerComponent*        InWorldItemContainer;                              // 0x1678(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                BP_LoadoutComponent;                               // 0x1680(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Den;                                               // 0x1688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               AcidCloud;                                         // 0x1690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ItemToSteal;                                       // 0x1698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FContainerCapacityData                HarpyContainerData;                                // 0x16A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bTurnOnLootShimmer;                                // 0x16A8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_Wildlife_Harpy_C* GetDefaultObj();

	TScriptInterface<class IItemContainer> GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle);
	TScriptInterface<class IItemContainer> GetDefaultContainer();
	bool HasContainer(TScriptInterface<class IItemContainer>& Container);
	bool HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle);
	void ProxySpawned(class AItemProxyBase* ProxyItem, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnRep_bTurnOnLootShimmer();
	void HandleTagCountChanged(struct FGameplayTag& Tag, int32 Count, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void DropItem(const struct FVector& LVector, const struct FTransform& LTransform, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXItemProxySpawnerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetAllItems_self_CastInput, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const struct FInventoryEntry& CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_RemoveItem_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void Start_WP_Indicator();
	void GetAngry(class AActor* Target, uint8 NewParam1, const struct FGameplayTag& Temp_struct_Variable);
	void RemoveItemCreatureGrants(class AEquippableItem* Item);
	void UpdateRunDistance(class UBlackboardComponent* LBlackboard, class ANWXAIController* LAIC, class AEquippableItem* CallFunc_GetItem_Weapon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetBBVar_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue_1, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetCreatureRunDistance_self_CastInput, float CallFunc_GetCreatureRunDistance_ReturnValue, class ANWXAIController* CallFunc_GetCreatureController_CreatureController, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void ApplyItemCreatureGrants(class AEquippableItem* Item);
	void Creature_OnDamageReceived(double Damage, class AActor* Target, class AActor* Source, const struct FGameplayTagContainer& EffectTags, const struct FHitResult& HitResult, const struct FTagValueContainer& TagValueContainer);
	void CrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Creature_Wildlife_Harpy(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
};

}


