#pragma once

#include "CoreMinimal.h"
#include "ParagonRPG_ver2GameModeBase.h"
#include "TitleGameMode.generated.h"

UCLASS()
class PARAGONRPG_VER2_API ATitleGameMode : public AParagonRPG_ver2GameModeBase
{
	GENERATED_BODY()
	
private:

protected:
	virtual void BeginPlay() override;

public:
	ATitleGameMode();

	UFUNCTION(Blueprintcallable)
	void OnStartGame();

	UFUNCTION(Blueprintcallable)
	void OnSettings();

	UFUNCTION(Blueprintcallable)
	void OnExitGame();
};
