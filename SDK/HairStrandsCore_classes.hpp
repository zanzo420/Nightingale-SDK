#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.OptimusGroomDataInterface
class UOptimusGroomDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusGroomDataInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.OptimusGroomDataProvider
class UOptimusGroomDataProvider : public UComputeDataProvider
{
public:
	class UGroomComponent*                       Groom;                                             // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOptimusGroomDataProvider* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.OptimusGroomExecDataInterface
class UOptimusGroomExecDataInterface : public UOptimusComputeDataInterface
{
public:
	uint8                                        Pad_435E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EOptimusGroomExecDomain           Domain;                                            // 0x30(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_435F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOptimusGroomExecDataInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.OptimusGroomExecDataProvider
class UOptimusGroomExecDataProvider : public UComputeDataProvider
{
public:
	class UGroomComponent*                       GroomComponent;                                    // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOptimusGroomExecDomain           Domain;                                            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4360[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOptimusGroomExecDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.OptimusGroomGuideDataInterface
class UOptimusGroomGuideDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusGroomGuideDataInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.OptimusGroomGuideDataProvider
class UOptimusGroomGuideDataProvider : public UComputeDataProvider
{
public:
	class UGroomComponent*                       Groom;                                             // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOptimusGroomGuideDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.OptimusGroomWriteDataInterface
class UOptimusGroomWriteDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusGroomWriteDataInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.OptimusGroomWriteDataProvider
class UOptimusGroomWriteDataProvider : public UComputeDataProvider
{
public:
	class UGroomComponent*                       GroomComponent;                                    // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4365[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOptimusGroomWriteDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.OptimusGroomComponentSource
class UOptimusGroomComponentSource : public UOptimusComponentSource
{
public:

	static class UClass* StaticClass();
	static class UOptimusGroomComponentSource* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class HairStrandsCore.GroomCacheImportOptions
class UGroomCacheImportOptions : public UObject
{
public:
	struct FGroomCacheImportSettings             ImportSettings;                                    // 0x28(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGroomCacheImportOptions* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class HairStrandsCore.GroomCacheImportData
class UGroomCacheImportData : public UAssetImportData
{
public:
	struct FGroomCacheImportSettings             Settings;                                          // 0x28(0x68)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGroomCacheImportData* GetDefaultObj();

};

// 0x8 (0x2A8 - 0x2A0)
// Class HairStrandsCore.GroomActor
class AGroomActor : public AActor
{
public:
	class UGroomComponent*                       GroomComponent;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGroomActor* GetDefaultObj();

};

// 0xE8 (0x110 - 0x28)
// Class HairStrandsCore.GroomAsset
class UGroomAsset : public UObject
{
public:
	uint8                                        Pad_439B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHairGroupInfoWithVisibility>  HairGroupsInfo;                                    // 0x30(0x10)(Edit, EditFixedSize, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsRendering>          HairGroupsRendering;                               // 0x40(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsPhysics>            HairGroupsPhysics;                                 // 0x50(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsInterpolation>      HairGroupsInterpolation;                           // 0x60(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsLOD>                HairGroupsLOD;                                     // 0x70(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsCardsSourceDescription> HairGroupsCards;                                   // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsMeshesSourceDescription> HairGroupsMeshes;                                  // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsMaterial>           HairGroupsMaterials;                               // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         EnableGlobalInterpolation;                         // 0xB0(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableSimulationCache;                             // 0xB1(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomInterpolationType           HairInterpolationType;                             // 0xB2(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_439F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         RiggedSkeletalMesh;                                // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                DeformedGroupSections;                             // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                       MinLOD;                                            // 0xD0(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformBool                      DisableBelowMinLodStripping;                       // 0xD4(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                EffectiveLODBias;                                  // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A1[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0xF8(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroomAsset* GetDefaultObj();

	void SetRiggedSkeletalMesh(class USkeletalMesh* In);
	void SetHairInterpolationType(enum class EGroomInterpolationType In);
	void SetHairGroupsRendering(TArray<struct FHairGroupsRendering>& In);
	void SetHairGroupsPhysics(TArray<struct FHairGroupsPhysics>& In);
	void SetHairGroupsMeshes(TArray<struct FHairGroupsMeshesSourceDescription>& In);
	void SetHairGroupsMaterials(TArray<struct FHairGroupsMaterial>& In);
	void SetHairGroupsLOD(TArray<struct FHairGroupsLOD>& In);
	void SetHairGroupsInterpolation(TArray<struct FHairGroupsInterpolation>& In);
	void SetHairGroupsCards(TArray<struct FHairGroupsCardsSourceDescription>& In);
	void SetEnableSimulationCache(bool In);
	void SetEnableGlobalInterpolation(bool In);
	void SetDeformedGroupSections(TArray<int32>& In);
	class USkeletalMesh* GetRiggedSkeletalMesh();
	enum class EGroomInterpolationType GetHairInterpolationType();
	TArray<struct FHairGroupsRendering> GetHairGroupsRendering();
	TArray<struct FHairGroupsPhysics> GetHairGroupsPhysics();
	TArray<struct FHairGroupsMeshesSourceDescription> GetHairGroupsMeshes();
	TArray<struct FHairGroupsMaterial> GetHairGroupsMaterials();
	TArray<struct FHairGroupsLOD> GetHairGroupsLOD();
	TArray<struct FHairGroupsInterpolation> GetHairGroupsInterpolation();
	TArray<struct FHairGroupsCardsSourceDescription> GetHairGroupsCards();
	bool GetEnableSimulationCache();
	bool GetEnableGlobalInterpolation();
	TArray<int32> GetDeformedGroupSections();
};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.HairCardGenerationSettings
class UHairCardGenerationSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class UHairCardGenerationSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.GroomAssetImportData
class UGroomAssetImportData : public UAssetImportData
{
public:
	class UGroomImportOptions*                   ImportOptions;                                     // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGroomAssetImportData* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class HairStrandsCore.GroomBindingAsset
class UGroomBindingAsset : public UObject
{
public:
	enum class EGroomBindingMeshType             GroomBindingType;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomAsset*                           Groom;                                             // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMesh*                         SourceSkeletalMesh;                                // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMesh*                         TargetSkeletalMesh;                                // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGeometryCache*                        SourceGeometryCache;                               // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGeometryCache*                        TargetGeometryCache;                               // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumInterpolationPoints;                            // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MatchingSection;                                   // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGoomBindingGroupInfo>         GroupInfos;                                        // 0x60(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43DA[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroomBindingAsset* GetDefaultObj();

	void SetTargetSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
	void SetTargetGeometryCache(class UGeometryCache* InGeometryCache);
	void SetSourceSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
	void SetSourceGeometryCache(class UGeometryCache* InGeometryCache);
	void SetNumInterpolationPoints(int32 InNumInterpolationPoints);
	void SetMatchingSection(int32 InMatchingSection);
	void SetGroupInfos(TArray<struct FGoomBindingGroupInfo>& InGroupInfos);
	void SetGroomBindingType(enum class EGroomBindingMeshType InGroomBindingType);
	void SetGroom(class UGroomAsset* InGroom);
	class USkeletalMesh* GetTargetSkeletalMesh();
	class UGeometryCache* GetTargetGeometryCache();
	class USkeletalMesh* GetSourceSkeletalMesh();
	class UGeometryCache* GetSourceGeometryCache();
	int32 GetNumInterpolationPoints();
	int32 GetMatchingSection();
	TArray<struct FGoomBindingGroupInfo> GetGroupInfos();
	enum class EGroomBindingMeshType GetGroomBindingType();
	class UGroomAsset* GetGroom();
};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.GroomBindingAssetList
class UGroomBindingAssetList : public UObject
{
public:
	TArray<class UGroomBindingAsset*>            Bindings;                                          // 0x28(0x10)(Edit, EditFixedSize, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGroomBindingAssetList* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.GroomBlueprintLibrary
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGroomBlueprintLibrary* GetDefaultObj();

	class UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(const class FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
	class UGroomBindingAsset* CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
	class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(const class FString& DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
	class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
};

// 0x60 (0x88 - 0x28)
// Class HairStrandsCore.GroomCache
class UGroomCache : public UObject
{
public:
	uint8                                        Pad_4403[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x40(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGroomCacheInfo                       GroomCacheInfo;                                    // 0x50(0x28)(Edit, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4404[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroomCache* GetDefaultObj();

};

// 0x260 (0x810 - 0x5B0)
// Class HairStrandsCore.GroomComponent
class UGroomComponent : public UMeshComponent
{
public:
	uint8                                        Pad_4411[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomAsset*                           GroomAsset;                                        // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGroomCache*                           GroomCache;                                        // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>             NiagaraComponents;                                 // 0x5D0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SourceSkeletalMesh;                                // 0x5E0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGroomBindingAsset*                    BindingAsset;                                      // 0x5E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                         PhysicsAsset;                                      // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4415[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairSimulationSettings               SimulationSettings;                                // 0x608(0x90)(Edit, BlueprintVisible, Interp, NativeAccessSpecifierPublic)
	class UMeshDeformer*                         MeshDeformer;                                      // 0x698(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshDeformerInstance*                 MeshDeformerInstance;                              // 0x6A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshDeformerInstanceSettings*         MeshDeformerInstanceSettings;                      // 0x6A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Strands_DebugMaterial;                             // 0x6B0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Strands_DefaultMaterial;                           // 0x6B8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Cards_DefaultMaterial;                             // 0x6C0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Meshes_DefaultMaterial;                            // 0x6C8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        AngularSpringsSystem;                              // 0x6D0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        CosseratRodsSystem;                                // 0x6D8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AttachmentName;                                    // 0x6E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Interp, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_441C[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHairGroupDesc>                GroomGroupsDesc;                                   // 0x780(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseCards;                                         // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRunning;                                          // 0x791(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLooping;                                          // 0x792(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bManualTick;                                       // 0x793(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ElapsedTime;                                       // 0x794(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_441F[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroomComponent* GetDefaultObj();

	void SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset);
	void SetMeshDeformer(class UMeshDeformer* InMeshDeformer);
	void SetHairLengthScaleEnable(bool bEnable);
	void SetHairLengthScale(float Scale);
	void SetGroomAsset(class UGroomAsset* Asset);
	void SetEnableSimulation(bool bInEnableSimulation);
	void SetBindingAsset(class UGroomBindingAsset* InBinding);
	void ResetSimulation();
	void ResetCollisionComponents();
	class UNiagaraComponent* GetNiagaraComponent(int32 GroupIndex);
	bool GetIsHairLengthScaleEnabled();
	void AddCollisionComponent(class USkeletalMeshComponent* SkeletalMeshComponent);
};

// 0x38 (0x60 - 0x28)
// Class HairStrandsCore.GroomCreateBindingOptions
class UGroomCreateBindingOptions : public UObject
{
public:
	TWeakObjectPtr<class UGroomAsset>            GroomAsset;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGroomBindingMeshType             GroomBindingType;                                  // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4424[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         SourceSkeletalMesh;                                // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         TargetSkeletalMesh;                                // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCache*                        SourceGeometryCache;                               // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCache*                        TargetGeometryCache;                               // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumInterpolationPoints;                            // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MatchingSection;                                   // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGroomCreateBindingOptions* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class HairStrandsCore.GroomCreateFollicleMaskOptions
class UGroomCreateFollicleMaskOptions : public UObject
{
public:
	int32                                        Resolution;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RootRadius;                                        // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFollicleMaskOptions>          Grooms;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGroomCreateFollicleMaskOptions* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
class UGroomCreateStrandsTexturesOptions : public UObject
{
public:
	int32                                        Resolution;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStrandsTexturesTraceType         TraceType;                                         // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_442E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceDistance;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStrandsTexturesMeshType          MeshType;                                          // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_442F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           StaticMesh;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODIndex;                                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SectionIndex;                                      // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UVChannelIndex;                                    // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4431[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                GroupIndex;                                        // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGroomCreateStrandsTexturesOptions* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class HairStrandsCore.GroomImportOptions
class UGroomImportOptions : public UObject
{
public:
	struct FGroomConversionSettings              ConversionSettings;                                // 0x28(0x30)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsInterpolation>      InterpolationSettings;                             // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGroomImportOptions* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.GroomHairGroupsPreview
class UGroomHairGroupsPreview : public UObject
{
public:
	TArray<struct FGroomHairGroupPreview>        Groups;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGroomHairGroupsPreview* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.GroomPluginSettings
class UGroomPluginSettings : public UObject
{
public:
	float                                        GroomCacheLookAheadBuffer;                         // 0x28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4434[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroomPluginSettings* GetDefaultObj();

};

// 0x20 (0x110 - 0xF0)
// Class HairStrandsCore.MovieSceneGroomCacheSection
class UMovieSceneGroomCacheSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGroomCacheParams           Params;                                            // 0xF0(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneGroomCacheSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class HairStrandsCore.MovieSceneGroomCacheTrack
class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_4435[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGroomCacheTrack* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_4436[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroomAsset*                           DefaultSource;                                     // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SourceActor;                                       // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4438[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceHairStrands* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                            GridSize;                                          // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_443B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVelocityGrid* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePressureGrid* GetDefaultObj();

};

}


