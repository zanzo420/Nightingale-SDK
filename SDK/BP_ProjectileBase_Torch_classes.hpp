#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0xCE8 - 0xCB2)
// BlueprintGeneratedClass BP_ProjectileBase_Torch.BP_ProjectileBase_Torch_C
class ABP_ProjectileBase_Torch_C : public ABP_ProjectileBase_C
{
public:
	uint8                                        Pad_A57C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Flames;                                            // 0xCC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0xCC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0xCD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TorchSpin_NewTrack_0_0E2FD9B84F2908078CADE9822A060CCD; // 0xCD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TorchSpin__Direction_0E2FD9B84F2908078CADE9822A060CCD; // 0xCDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A57D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TorchSpin;                                         // 0xCE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProjectileBase_Torch_C* GetDefaultObj();

	void SetupLightIntensity(class UCurveFloat* IntensityCurve, float NightIntensity, float DayIntensity, class AActor* ManagerActor, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTimeOfDayManagerFromSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_TimeOfDayManager_C* K2Node_DynamicCast_AsBP_Time_Of_Day_Manager, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetNormalizedVisualTime_VisualTime, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, float CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast);
	void TorchSpin__FinishedFunc();
	void TorchSpin__UpdateFunc();
	void ReceiveBeginPlay();
	void SetupClientTorch();
	void ExecuteUbergraph_BP_ProjectileBase_Torch(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}


