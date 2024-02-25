#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2B0 - 0x2A0)
// BlueprintGeneratedClass BP_FavourProxy.BP_FavourProxy_C
class ABP_FavourProxy_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FavourProxy_C* GetDefaultObj();

	void OnWorldLoadedCheckPersistence(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_WorldStateIsLoadedFromPersistence_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SpawnFavourActor(const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Encounter_HopeEcho_Favour_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FavourProxy(int32 EntryPoint, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UWorldPersistenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsTrackingRunningWorld_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue_1);
};

}


