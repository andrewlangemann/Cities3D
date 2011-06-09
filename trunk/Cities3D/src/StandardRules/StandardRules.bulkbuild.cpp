#include "stdwx.h"

// This file must come first.
#include "Strings.cpp"

#include "AllowedName.cpp"
#include "AllowedOption.cpp"
#include "AroundTheBoardName.cpp"
#include "AroundTheBoardOverview.cpp"
#include "AroundTheBoardPortsName.cpp"
#include "AroundTheBoardPortsOverview.cpp"
#include "BankDataDevCards.cpp"
#include "BankDataStandard.cpp"
#include "BuildDataDevCards.cpp"
#include "BuildDataStandard.cpp"
#include "DevCardListCtrl.cpp"
#include "DevCardOptions.cpp"
#include "DevCardsDialog.cpp"
#include "DevCardsKeyMaps.cpp"
#include "DevCardsName.cpp"
#include "DevCardsOverview.cpp"
#include "DevCardsStats.cpp"
#include "DevCardsUI.cpp"
#include "DevelopmentCardsName.cpp"
#include "DevelopmentCardsOption.cpp"
#include "DrawChipObject.cpp"
#include "DrawCityObject.cpp"
#include "DrawRoadObject.cpp"
#include "DrawRobberObject.cpp"
#include "DrawSettlementObject.cpp"
#include "DrawTileObject.cpp"
#include "GoldDialog.cpp"
#include "GoldName.cpp"
#include "GoldStats.cpp"
#include "GoldUI.cpp"
#include "ImageSetsDevCards.cpp"
#include "ImageSetsGold.cpp"
#include "ImageSetsJungles.cpp"
#include "ImageSetsStandard.cpp"
#include "LogicCanAcceptTrade.cpp"
#include "LogicCanAutoTrade.cpp"
#include "LogicCanBankTransact.cpp"
#include "LogicCanBuildCity.cpp"
#include "LogicCanBuildCityTurn.cpp"
#include "LogicCanBuildRoad.cpp"
#include "LogicCanBuildRoadTurn.cpp"
#include "LogicCanBuildSettlement.cpp"
#include "LogicCanBuildSettlementTurn.cpp"
#include "LogicCanBuyDevCard.cpp"
#include "LogicCanBuyDevCardTurn.cpp"
#include "LogicCanEndTurn.cpp"
#include "LogicCanEndTurnStandard.cpp"
#include "LogicCanPlaceRoad.cpp"
#include "LogicCanPlaceRobber.cpp"
#include "LogicCanPlaceSettlement.cpp"
#include "LogicCanPurchase.cpp"
#include "LogicCanPurchaseCity.cpp"
#include "LogicCanPurchaseDevCard.cpp"
#include "LogicCanPurchaseRoad.cpp"
#include "LogicCanPurchaseSettlement.cpp"
#include "LogicCanShowCard.cpp"
#include "LogicCanShowCardDevCards.cpp"
#include "LogicCanTradeBank.cpp"
#include "LogicCanTradeBankStandard.cpp"
#include "LogicCanTradeOthers.cpp"
#include "LogicCanTradeOthersStandard.cpp"
#include "LogicCardListDevCard.cpp"
#include "LogicCardName.cpp"
#include "LogicCardNameDevCards.cpp"
#include "LogicCardCount.cpp"
#include "LogicCardText.cpp"
#include "LogicCardTextDevCards.cpp"
#include "LogicCostCity.cpp"
#include "LogicCostDevCard.cpp"
#include "LogicCostRoad.cpp"
#include "LogicCostSettlement.cpp"
#include "LogicGatherCity.cpp"
#include "LogicGatherSettlement.cpp"
#include "LogicHasPreRollAction.cpp"
#include "LogicHasPreRollCard.cpp"
#include "LogicHasPreRollCardDevCards.cpp"
#include "LogicIsCardPlayable.cpp"
#include "LogicIsCardPlayableDevCards.cpp"
#include "LogicIsCornerBlocked.cpp"
#include "LogicIsCornerReachable.cpp"
#include "LogicIsCornerSettleable.cpp"
#include "LogicIsInitialResource.cpp"
#include "LogicIsInitialResourceGold.cpp"
#include "LogicIsResourceBankTradeable.cpp"
#include "LogicIsResourceBankTradeableStandard.cpp"
#include "LogicIsResourceGoldable.cpp"
#include "LogicIsValidDiceRoll.cpp"
#include "LogicIsValidDiceRollNo7s.cpp"
#include "LogicIsValidRoadPlacement.cpp"
#include "LogicIsValidRoadPlacementStandard.cpp"
#include "LogicIsValidSettlementPlacement.cpp"
#include "LogicIsValidSettlementPlacementStandard.cpp"
#include "LogicIsValidSidePlacement.cpp"
#include "LogicPlaceFirstRoad.cpp"
#include "LogicPlaceInitialBlock.cpp"
#include "LogicPlaceInitialBlockSettlements.cpp"
#include "LogicPlaceInitialCorner.cpp"
#include "LogicPlaceInitialRoad.cpp"
#include "LogicPlaceInitialRoadNoOceans.cpp"
#include "LogicPlaceInitialTile.cpp"
#include "LogicPlaceInitialTileInitial.cpp"
#include "LogicPlaceInitialTileLand.cpp"
#include "LogicPlaceSecondRoad.cpp"
#include "LogicRequestInitialPlacement.cpp"
#include "LogicRequestInitialRoad.cpp"
#include "LogicResourceCount.cpp"
#include "LogicResourceName.cpp"
#include "LogicResourceNameGold.cpp"
#include "LogicResourceNameStandard.cpp"
#include "LogicResourceOrder.cpp"
#include "LogicResourceOrderGold.cpp"
#include "LogicResourceOrderStandard.cpp"
#include "LogicResourceType.cpp"
#include "LogicRoadLength.cpp"
#include "LogicRobberStealPlayers.cpp"
#include "LogicRollText.cpp"
#include "LogicTileIsLand.cpp"
#include "LogicTileIsLandGold.cpp"
#include "LogicTileIsOcean.cpp"
#include "LogicTileIsPort.cpp"
#include "LogicTileIsResource.cpp"
#include "LogicTileIsResourceGold.cpp"
#include "LogicTileIsResourceJungle.cpp"
#include "LogicTileStandard.cpp"
#include "LogicWin.cpp"
#include "MonopolyDialog.cpp"
#include "No7Name.cpp"
#include "No7Option.cpp"
#include "PlayerDataDevCards.cpp"
#include "PlayerDataStandard.cpp"
#include "PointsName.cpp"
#include "PointsOption.cpp"
#include "RandomTilesName.cpp"
#include "RandomTilesOverview.cpp"
#include "RuleAcceptOffer.cpp"
#include "RuleAdjustPoints.cpp"
#include "RuleAdjustResources.cpp"
#include "RuleBankTransact.cpp"
#include "RuleBeginBlockingAction.cpp"
#include "RuleBeginTurn.cpp"
#include "RuleBlockBankResources.cpp"
#include "RuleBlockResources.cpp"
#include "RuleBuildCity.cpp"
#include "RuleBuildCityTurn.cpp"
#include "RuleBuildRoad.cpp"
#include "RuleBuildRoadCommon.cpp"
#include "RuleBuildRoadTurn.cpp"
#include "RuleBuildSettlement.cpp"
#include "RuleBuildSettlementTurn.cpp"
#include "RuleBuyDevCard.cpp"
#include "RuleBuyDevCardTurn.cpp"
#include "RuleChainGold.cpp"
#include "RuleChainStandard.cpp"
#include "RuleClearOffer.cpp"
#include "RuleClickOffer.cpp"
#include "RuleCloseTradeWindow.cpp"
#include "RuleContinueInitialPlacements.cpp"
#include "RuleCurrentOffer.cpp"
#include "RuleCurrentOfferHotseat.cpp"
#include "RuleDecreaseInitialPlayer.cpp"
#include "RuleEndBlockingAction.cpp"
#include "RuleEndTurn.cpp"
#include "RuleEndTurnDevCards.cpp"
#include "RuleExecuteAutoTrade.cpp"
#include "RuleExecuteBankTrade.cpp"
#include "RuleExecuteGold.cpp"
#include "RuleExecuteLose7.cpp"
#include "RuleExecuteMonopolyCard.cpp"
#include "RuleExecuteRobberPlacement.cpp"
#include "RuleExecuteRobberSteal.cpp"
#include "RuleExecuteTrade.cpp"
#include "RuleExecuteYearOfPlentyCard.cpp"
#include "RuleGainLargestArmy.cpp"
#include "RuleGainLongestRoad.cpp"
#include "RuleGatherResources.cpp"
#include "RuleGenerateAroundBoardPorts.cpp"
#include "RuleGenerateChips.cpp"
#include "RuleGenerateRandom.cpp"
#include "RuleGold.cpp"
#include "RuleHandle7.cpp"
#include "RuleIncreaseInitialPlayer.cpp"
#include "RuleInitializeDevCards.cpp"
#include "RuleInitializeGold.cpp"
#include "RuleInitializeJungles.cpp"
#include "RuleInitializeStandard.cpp"
#include "RuleInitialResources.cpp"
#include "RuleLargestArmyCheck.cpp"
#include "RuleLocateInitialRoad.cpp"
#include "RuleLongestRoadCheck.cpp"
#include "RuleLoseLargestArmy.cpp"
#include "RuleLoseLongestRoad.cpp"
#include "RuleOfferTrade.cpp"
#include "RulePerformGameAction.cpp"
#include "RulePlaceCity.cpp"
#include "RulePlaceCityTurn.cpp"
#include "RulePlaceFirstSettlement.cpp"
#include "RulePlaceInitialExtensions.cpp"
#include "RulePlaceInitialPlacement.cpp"
#include "RulePlaceInitialRoad.cpp"
#include "RulePlaceRoad.cpp"
#include "RulePlaceRoadTurn.cpp"
#include "RulePlaceRobber.cpp"
#include "RulePlaceSecondSettlement.cpp"
#include "RulePlaceSettlement.cpp"
#include "RulePlaceSettlementCommon.cpp"
#include "RulePlaceSettlementReduced.cpp"
#include "RulePlaceSettlementTurn.cpp"
#include "RulePlayCard.cpp"
#include "RulePlayCardDevCards.cpp"
#include "RulePlayCardMonopoly.cpp"
#include "RulePlayCardRoadBuilding.cpp"
#include "RulePlayCardSoldier.cpp"
#include "RulePlayCardVictoryPoint.cpp"
#include "RulePlayCardYearOfPlenty.cpp"
#include "RulePlaySettlementSound.cpp"
#include "RulePostWin.cpp"
#include "RulePurchase.cpp"
#include "RulePurchaseItem.cpp"
#include "RuleReduceCity.cpp"
#include "RuleReduceCityCommon.cpp"
#include "RuleRejectOffer.cpp"
#include "RuleRemoveCity.cpp"
#include "RuleRemoveSettlement.cpp"
#include "RuleRequestInitialPlacement.cpp"
#include "RuleRequestInitialRoad.cpp"
#include "RuleResetAutoTrade.cpp"
#include "RuleRestartFirstRoad.cpp"
#include "RuleRestartFirstSettlement.cpp"
#include "RuleRestartGold.cpp"
#include "RuleRestartOldState.cpp"
#include "RuleRestartPostDiceRoll.cpp"
#include "RuleRestartPreRoll.cpp"
#include "RuleRestartRobber.cpp"
#include "RuleRestartRobberSteal.cpp"
#include "RuleRestartSecondRoad.cpp"
#include "RuleRestartSecondSettlement.cpp"
#include "RuleRestartTurn.cpp"
#include "RuleRestartTurnCityPlacement.cpp"
#include "RuleRestartTurnLose7.cpp"
#include "RuleRestartTurnMonopoly.cpp"
#include "RuleRestartTurnRoadPlacement.cpp"
#include "RuleRestartTurnSettlementPlacement.cpp"
#include "RuleRestartTurnYearOfPlenty.cpp"
#include "RuleRobberSteal.cpp"
#include "RuleRollDice.cpp"
#include "RuleRollDiceText.cpp"
#include "RuleSelectRobberSteal.cpp"
#include "RuleShowCards.cpp"
#include "RuleShowResources.cpp"
#include "RuleStartInitialPlacements.cpp"
#include "RuleStartRobber.cpp"
#include "RuleStartRobberCommon.cpp"
#include "RuleTakeAction.cpp"
#include "RuleTradeBank.cpp"
#include "RuleTradeOthers.cpp"
#include "RuleWin.cpp"
#include "RuleWinDevCards.cpp"
#include "RuleWontTrade.cpp"
#include "StandardKeyMaps.cpp"
#include "StandardOverview.cpp"
#include "StandardRules.cpp"
#include "StandardStats.cpp"
#include "StandardUI.cpp"
#include "StockName.cpp"
#include "StockOption.cpp"
#include "YearOfPlentyDialog.cpp"