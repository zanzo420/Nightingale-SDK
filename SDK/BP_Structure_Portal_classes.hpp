#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xAA0 - 0xA28)
// BlueprintGeneratedClass BP_Structure_Portal.BP_Structure_Portal_C
class ABP_Structure_Portal_C : public ABP_Structure_Constructed_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URealmCardMachineComponent*            RealmCardMachineComponent;                         // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       PortalVFXSpawnPoint;                               // 0xA38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       PortalSpawnPoint;                                  // 0xA40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       PlayerSpawnPoint;                                  // 0xA48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PortalControllerComponent_C*       BP_PortalControllerComponent;                      // 0xA50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DeploymentPortalActorClass;                        // 0xA58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ADeploymentPortal*                     SpawnedPortalActor;                                // 0xA60(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsServerPortalSpawned;                            // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A796[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PlayerStartClass;                                  // 0xA70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerStart*                       PlayerStartActor;                                  // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, NoDestructor, HasGetValueTypeHash)
	class FString                                PortalUniqueID;                                    // 0xA80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	class UClass*                                VFXActorClass;                                     // 0xA90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PortalArchVFX_C*                   SpawnedVFXActor;                                   // 0xA98(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_Portal_C* GetDefaultObj();

	class URealmCardMachineComponent* GetRealmCardMachineComponent();
	struct FTransform GetPlayerSpawnTransform(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
	class UPortalControllerComponent* GetPortalController();
	void CleanUpActors(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetPortalVFXStateFromPersistence(TScriptInterface<class IPortalControllerInterface> K2Node_DynamicCast_AsPortal_Controller_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, enum class ETemporalPortalState CallFunc_GetPortalState_ReturnValue);
	void GetPortalId(bool* IsValid, class FString* ID, bool CallFunc_GetPortalUniqueId_OutSuccess, const class FString& CallFunc_GetPortalUniqueId_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void GetStartPointId(bool* IsValid, class FString* ID, bool CallFunc_GetPortalId_IsValid, const class FString& CallFunc_GetPortalId_Id, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void IntializeFromPeristence(bool CallFunc_GetStartPointId_IsValid, const class FString& CallFunc_GetStartPointId_Id, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Server_IsInitialized_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void OnStateChange(bool CallFunc_IsServer_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue);
	void InitializePortalController(bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_GetPlayerSpawnTransform_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, bool CallFunc_GetPortalId_IsValid, const class FString& CallFunc_GetPortalId_Id, bool CallFunc_GetStartPointId_IsValid, const class FString& CallFunc_GetStartPointId_Id, class FName CallFunc_Conv_StringToName_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PortalArchVFX_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerStart* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ADeploymentPortal* CallFunc_FinishSpawningActor_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsServer_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void OnLinkedReferencesRestored();
	void ExecuteUbergraph_BP_Structure_Portal(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue);
};

}


