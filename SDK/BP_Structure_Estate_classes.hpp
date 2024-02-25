#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xA48 - 0xA28)
// BlueprintGeneratedClass BP_Structure_Estate.BP_Structure_Estate_C
class ABP_Structure_Estate_C : public ABP_Structure_Constructed_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       PlayerSpawnLocation;                               // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureEstateComponent_C*        BP_StructureEstateComponent;                       // 0xA38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         EstateBoundsComponent;                             // 0xA40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_Estate_C* GetDefaultObj();

	class URealmCardMachineComponent* GetRealmCardMachineComponent();
	struct FTransform GetPlayerSpawnTransform(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
	class UPortalControllerComponent* GetPortalController();
	class UStructureEstateComponent* GetStructureEstateComponent();
	class UStructureEstateComponent* GetStructureEstateComponentForModify();
	class FText GetDisplayNameText(const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, const class FString& CallFunc_GetOwningPlayerID_OutPlayerId, bool CallFunc_GetOwningPlayerID_ReturnValue, class FText CallFunc_GetDisplayNameText_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void OnInit(class UObject* Structure, bool CallFunc_IsServer_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue);
	class UPrimitiveComponent* GetStructureTraitAuraCollider();
	class UPrimitiveComponent* GetStructureTraitAuraColliderForModify();
	void InitializeEstateBounds(bool CallFunc_GetTraitInitData_IsValid, class UStructureTraitInitData* CallFunc_GetTraitInitData_OutTraitInitData, bool CallFunc_IsServer_ReturnValue, class FName CallFunc_GetCollisionProfileName_ProfileName, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void OnStateChange(bool CallFunc_IsServer_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Structure_Estate(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


