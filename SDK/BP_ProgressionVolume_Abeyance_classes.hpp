#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x328 - 0x308)
// BlueprintGeneratedClass BP_ProgressionVolume_Abeyance.BP_ProgressionVolume_Abeyance_C
class ABP_ProgressionVolume_Abeyance_C : public AProgressionGateVolume
{
public:
	class UAwaitableChildActorComponent*         ACA_CollisionVolume;                               // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAwaitableChildActorComponent*         ACA_GameplayEffectVolume;                          // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAwaitableChildActorComponent*         ACA_ImpulseVolume;                                 // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProgressionVolume_Abeyance_C* GetDefaultObj();

	class UAwaitableChildActorComponent* GetCollisionVolumeChildActorComponent();
	class UAwaitableChildActorComponent* GetImpulseVolumeChildActorComponent();
	class UAwaitableChildActorComponent* GetGameplayEffectVolumeChildActorComponent();
};

}


