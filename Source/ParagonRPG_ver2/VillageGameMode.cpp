#include "VillageGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

AVillageGameMode::AVillageGameMode()
{
	/*PlayerControllerClass = APlayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<UUserWidget> MainwidgetClass(TEXT("/Game/2_UI/Title/WB_Title"));
	if (MainwidgetClass.Succeeded())
	{
		m_mainWidget = CreateWidget(GetWorld(), MainwidgetClass.Class);
	}*/

	PlayerControllerClass = APlayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<APawn>PlayerPawnBPClass(TEXT("/Game/ParagonAurora/Characters/Heroes/Aurora/AuroraPlayerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AVillageGameMode::BeginPlay()
{
	Super::BeginPlay();

}