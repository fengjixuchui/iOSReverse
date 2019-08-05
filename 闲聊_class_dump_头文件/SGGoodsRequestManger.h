//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, SGGetFunctionConfigResp;

@interface SGGoodsRequestManger : NSObject
{
    NSArray *_groupGoodList;
    SGGetFunctionConfigResp *_configResp;
    NSMutableDictionary *_shopCartDict;
    NSMutableArray *_shopCartCachGroupInfoArray;
    NSArray *_localAddressJsonArray;
    NSMutableDictionary *_expressCompanyListDict;
    NSMutableArray *_expressCompanyListArray;
    NSMutableArray *_goodsSearchHistoryArray;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *goodsSearchHistoryArray; // @synthesize goodsSearchHistoryArray=_goodsSearchHistoryArray;
@property(retain, nonatomic) NSMutableArray *expressCompanyListArray; // @synthesize expressCompanyListArray=_expressCompanyListArray;
@property(retain, nonatomic) NSMutableDictionary *expressCompanyListDict; // @synthesize expressCompanyListDict=_expressCompanyListDict;
@property(retain, nonatomic) NSArray *localAddressJsonArray; // @synthesize localAddressJsonArray=_localAddressJsonArray;
@property(retain, nonatomic) NSMutableArray *shopCartCachGroupInfoArray; // @synthesize shopCartCachGroupInfoArray=_shopCartCachGroupInfoArray;
@property(retain, nonatomic) NSMutableDictionary *shopCartDict; // @synthesize shopCartDict=_shopCartDict;
@property(retain, nonatomic) SGGetFunctionConfigResp *configResp; // @synthesize configResp=_configResp;
@property(retain, nonatomic) NSArray *groupGoodList; // @synthesize groupGoodList=_groupGoodList;
- (void).cxx_destruct;
- (void)getGroupbuyTeamDetailWithGroupId:(long long)arg1 withTeamId:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)payWaitingGroupbuyOrderWithGroupId:(long long)arg1 withOrderNo:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)submitGroupbuyOrderWithGroupId:(long long)arg1 withGoodsItemList:(id)arg2 withTotalAmount:(long long)arg3 withAddressId:(long long)arg4 withReceiveCouponId:(long long)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)getGroupbuyOrderActualPayAmountWithGroupId:(long long)arg1 withGoodsItemList:(id)arg2 withUseCouponFlag:(_Bool)arg3 withReceiveCouponId:(long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (_Bool)getAccountSetGoodsRedPointNeedHidden;
- (void)setAccountSetingGoodsRedPointHidden;
- (void)payWaitingOrderForGameOrVideoWithGroupId:(long long)arg1 withOrderNo:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)submitOrderForGameOrVideoWithGroupId:(long long)arg1 withGoodsId:(long long)arg2 withPayAmount:(long long)arg3 withAccount:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)cleanGoodsSearchLocalRecord;
- (id)getGoodsSearchRecorderList;
- (void)storeGoodsSearchLoaclQuery:(id)arg1;
- (void)getUserLikelyFavoriteGoodsWithGroupId:(long long)arg1 withSceneType:(int)arg2 withGoodsIdArray:(id)arg3 withPageNo:(int)arg4 withPageSize:(int)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)searchGoodsListWithParamsWithGroupId:(long long)arg1 withQuery:(id)arg2 withSort:(int)arg3 withPageNo:(int)arg4 withPageSize:(int)arg5 withAdminFlag:(_Bool)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (void)getStoreGroupInfoWithGroupId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getActivityGoodsPageWithPromoActivityId:(long long)arg1 withGroupId:(long long)arg2 withPageNo:(int)arg3 withPageSize:(int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)enterActivityModuleWithPromoActivityId:(long long)arg1 withGroupId:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getGroupShopList:(CDUnknownBlockType)arg1;
- (id)getCachLastChoosePayWay;
- (void)saveBuyGoodsWithPayWay:(id)arg1;
- (void)submitOrderRefundExpressInfoWithOrderNo:(id)arg1 withExpressId:(long long)arg2 withExpressNo:(id)arg3 withExpressExplain:(id)arg4 withPictureUrlList:(id)arg5 withUpdateFlag:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (id)getExpressCompanyDict;
- (id)getTopExpreeCompanyFiltArray;
- (void)saveExpressCompanyList:(id)arg1;
- (void)getXmallExpressCompanyList:(CDUnknownBlockType)arg1;
- (void)cancelOrderRefundWithOrderNo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getOrderRefundDetailWithOrderNo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitOrderRefundWithOrderNo:(id)arg1 withRefundType:(int)arg2 withRefundAmountType:(int)arg3 withRefundAmount:(long long)arg4 withRefundReasonId:(long long)arg5 withRefundExpressStatus:(int)arg6 withRefundExplain:(id)arg7 withMobile:(id)arg8 withPictureUrlList:(id)arg9 withUpdateFlag:(_Bool)arg10 completion:(CDUnknownBlockType)arg11;
- (void)getRefundInfoBeforeSubmitWithOrderNo:(id)arg1 withRefundType:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)payWeiXin:(id)arg1;
- (void)payXmallOrderByWxWithTransId:(id)arg1 withOrderAmount:(long long)arg2 withValidateToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getXmallPaymentChannelList:(CDUnknownBlockType)arg1;
- (void)jumpWebGoodsInfo:(id)arg1 fromVc:(id)arg2 groupId:(long long)arg3;
- (void)getGoodsListByCategoryWithGroupId:(long long)arg1 withFirstCategoryId:(long long)arg2 withSecondCategoryId:(long long)arg3 withPageNo:(int)arg4 withPageSize:(int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)getCategoriesWithGroupId:(long long)arg1 withScene:(int)arg2 withPageSize:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)xmallSpikeGoodsModuleWithGroupId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)JoinGroupChatByXCodeReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)IdentifyXCodeReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)GenerateXCodeReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)payXmallOrderByLqtWithTransId:(id)arg1 withOrderAmount:(long long)arg2 withPayPasswd:(id)arg3 withValidateToken:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getSpikerCouponsGoodListWithGroupId:(long long)arg1 withActivityId:(long long)arg2 withGoodsItemList:(id)arg3 withPageNo:(int)arg4 withPageSize:(int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)payMobileChargeOrderByLqtWithTransId:(id)arg1 withOrderAmount:(long long)arg2 withPayPasswd:(id)arg3 withValidateToken:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)queryCouponReceiveDetail:(long long)arg1 withPageNo:(int)arg2 withPageSize:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)queryCouponSendDetail:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)JoinGroupChatByCouponInvitationLinkReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)VerifyCouponInvitationLinkReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareCouponResp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCouponReceiveListByGoodsListWithGroupId:(long long)arg1 withGoodsItemList:(id)arg2 withPageNo:(int)arg3 withPageSize:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getMyOrderCountGroupingByState:(CDUnknownBlockType)arg1;
- (void)queryCouponGroupListWithStatus:(int)arg1 withGroupId:(long long)arg2 withExtraGroupId:(long long)arg3 withPageNo:(int)arg4 withPageSize:(int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)JoinGroupChatByGoodsInvitationLinkReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ScanCouponQrCodeReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ScanGroupBuyQrCodeReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ScanGoodsQrCodeReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryCouponReceiveListWithCouponStatus:(int)arg1 withPageNo:(int)arg2 withPageSize:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)payMobileChargeOrderByBankCardWithTransactionId:(id)arg1 withBankCardNo:(id)arg2 withAmout:(long long)arg3 withPayPasswd:(id)arg4 withValidateToken:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)payMobileChargeOrderWithTransactionId:(id)arg1 withAmout:(long long)arg2 withPayPasswd:(id)arg3 withValidateToken:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getGoodsSkuSimpleDataByIdsWithGroupID:(long long)arg1 withGoodsArray:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getChargeCenterToken:(CDUnknownBlockType)arg1;
- (void)getSupportParamsWithGroupID:(long long)arg1 withGoodsId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getChosenGoodsPageWithGroupID:(long long)arg1 withPageNo:(int)arg2 withPageSize:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)payWaitingOrderForMobileWithGroupID:(long long)arg1 withOrderNo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitOrderForMobileWithGroupID:(long long)arg1 withGoodsId:(long long)arg2 withPayAmount:(long long)arg3 withMobile:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getSpikeH5RequestTokenWithGroupID:(long long)arg1 withGoodsId:(long long)arg2 withActivityID:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getH5RequestTokenWithGroupID:(long long)arg1 withGoodsId:(long long)arg2 withSupportId:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)submitSpikeOrder:(long long)arg1 withActivityId:(long long)arg2 withOrderItemList:(id)arg3 withAddressId:(long long)arg4 withTotalAmount:(long long)arg5 withReceiveCouponId:(long long)arg6 withAddressType:(int)arg7 completion:(CDUnknownBlockType)arg8;
- (void)getSpikeOrderActualPayAmount:(long long)arg1 withActivityId:(long long)arg2 withReceiveCouponId:(long long)arg3 withUseCouponFlag:(_Bool)arg4 goodsItemList:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)getSpikeGoodsInfo:(long long)arg1 withGoodsID:(long long)arg2 withGroupId:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addSpikeNotification:(long long)arg1 withGoodsID:(long long)arg2 withGroupId:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getSpikeActivity:(int)arg1 pageSize:(int)arg2 activityId:(long long)arg3 beginningTime:(long long)arg4 withGroupId:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)getSpikeActivityList:(int)arg1 pageSize:(int)arg2 withGroupId:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getGoodsListByTypeWithGroupId:(long long)arg1 withTypeId:(long long)arg2 withPageNo:(int)arg3 pageSize:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)enterXmallMainPageWithGroupId:(long long)arg1 withPageNo:(int)arg2 pageSize:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getXmallMainSpikeGoods:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getOrderActualPayAmount:(long long)arg1 withReceiveCouponId:(long long)arg2 withUseCouponFlag:(_Bool)arg3 goodsItemList:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getSigalAccountDetail:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)searchOrderListBySeller:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelOrder:(long long)arg1 withOrderNo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteOrderBySell:(long long)arg1 withOrderNo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteOrderByBuy:(long long)arg1 withOrderNo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getmyIncome:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMyOrderListBySeller:(long long)arg1 withExtraGroupId:(long long)arg2 withOrderStatus:(long long)arg3 withPageNo:(long long)arg4 withPageSize:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)getMyOrderListByBuyer:(long long)arg1 withOrderStatus:(long long)arg2 withPageNo:(long long)arg3 withPageSize:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showOrderWithOrderNo:(id)arg1 withIsSeller:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)payXmallOrderByBankCardTransactionId:(id)arg1 withOrderAmount:(long long)arg2 withPayPasswd:(id)arg3 withBankCardNo:(id)arg4 withToken:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)payOrderForBalanceWithTransactionId:(id)arg1 withOrderAmount:(long long)arg2 withPayPasswd:(id)arg3 withToken:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)validateWaitPayOrder:(long long)arg1 withOrderNo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitOrder:(long long)arg1 withOrderItemList:(id)arg2 withAddressId:(long long)arg3 withTotalAmount:(long long)arg4 withReceiveCouponId:(long long)arg5 withAddressType:(int)arg6 completion:(CDUnknownBlockType)arg7;
- (void)deleteAddress:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAddress:(long long)arg1 withRealName:(id)arg2 withMobile:(id)arg3 withPostcode:(id)arg4 withProvince:(id)arg5 withCity:(id)arg6 withArea:(id)arg7 withDetailedAddress:(id)arg8 withDefaultFlag:(_Bool)arg9 withSetGroupAddressFlag:(_Bool)arg10 withGroupId:(long long)arg11 completion:(CDUnknownBlockType)arg12;
- (void)getAddressList:(long long)arg1 withPageSize:(long long)arg2 withGroupId:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addAddress:(id)arg1 withMobile:(id)arg2 withPostcode:(id)arg3 withProvince:(id)arg4 withCity:(id)arg5 withArea:(id)arg6 withDetailedAddress:(id)arg7 withDefaultFlag:(_Bool)arg8 withSetGroupAddressFlag:(_Bool)arg9 withGroupId:(long long)arg10 completion:(CDUnknownBlockType)arg11;
- (void)applySupplierAuthority:(long long)arg1 withOwnerId:(long long)arg2 supd:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getSupplierInfoWithInviteCode:(long long)arg1 withInviteCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryCloseGroupShop:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeGroupShopFunction:(long long)arg1 withGroupOwnID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyGroupRewardFunction:(long long)arg1 withGroupOwnID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getGroupRewardApplyStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getGoodsDetail:(long long)arg1 shareCount:(int)arg2 withGoodsId:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteGroupGoods:(long long)arg1 withGoodsId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateGroupGoodsWithGroupID:(long long)arg1 withGoodsId:(long long)arg2 withGoodsName:(id)arg3 withGoodsSmallPhotoUrl:(id)arg4 withGoodsBigPhotoUrl:(id)arg5 withDescPhotoUrlList:(id)arg6 withGoodsDescription:(id)arg7 withPrice:(long long)arg8 withGoldenbeanNum:(long long)arg9 withTotalNumber:(long long)arg10 completion:(CDUnknownBlockType)arg11;
- (void)addSelfDefinedGroupGoodsWithGroupID:(long long)arg1 withGoodsName:(id)arg2 withGoodsSmallPhotoUrl:(id)arg3 withGoodsBigPhotoUrl:(id)arg4 withDescPhotoUrlList:(id)arg5 withGoodsDescription:(id)arg6 withPrice:(long long)arg7 withGoldenbeanNum:(long long)arg8 withTotalNumber:(long long)arg9 completion:(CDUnknownBlockType)arg10;
- (void)addOfficialGroupGoodsID:(long long)arg1 withGoodsId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getChannelTypeList:(CDUnknownBlockType)arg1;
- (void)getGroupGoodsList:(long long)arg1 withPageNo:(int)arg2 withPageSize:(int)arg3 withDelInvalidFlag:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getOfficialGoodsList:(long long)arg1 withPageNo:(long long)arg2 withPageSize:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)applyGroupShopFunction:(long long)arg1 withOwnerId:(long long)arg2 withApplyOfficialAuthFlag:(_Bool)arg3 withInviteCode:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getGroupShopApplyStatus:(long long)arg1 withCloseFlag:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getGroupShopFunctionConfigWithIsNotice:(_Bool)arg1 withRequestCount:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cleanGroupShopCart;
- (void)deletNoValidShopCartGoods:(id)arg1;
- (void)deletAllSelectShopCartGoods:(id)arg1;
- (void)deletShopCartGoods:(id)arg1 groupId:(long long)arg2;
- (id)getGroupRequestGoodsArray;
- (id)cachShopCartNoVaildArray;
- (id)cachShopCartGoodsDict;
- (id)getCachShopCartGroupInfoArray;
- (long long)getGroupShopCartGoodCount;
- (void)submitOrderSuccessDeletShopCart:(id)arg1 withGroupId:(long long)arg2;
- (void)reloadAllCachGoods:(id)arg1;
- (void)saveShopCartDataToFile;
- (void)reloadShopCartWithNewGoodsArray:(id)arg1 groupId:(long long)arg2;
- (void)reloadShopCartWithShopCartModelSkuIDArray:(id)arg1 groupId:(long long)arg2;
- (void)reloadShopCartCachGroupInfoArray:(long long)arg1;
- (void)shopCartsChangeGoodsNumberWithGoods:(id)arg1 groupId:(long long)arg2 monetPostId:(id)arg3 monetShareCount:(int)arg4;
- (void)reloadShopCartWithGoods:(id)arg1 groupId:(long long)arg2 isNewAdd:(_Bool)arg3 monetPostId:(id)arg4 monetShareCount:(int)arg5;
- (void)initShopCart;
- (id)getLocalArreraModel:(id)arg1 withCityModel:(id)arg2;
- (id)getLocalCityModel:(id)arg1 withProviceModel:(id)arg2;
- (id)getLocalProviceModel:(id)arg1;
- (id)getLocalAddress;
- (id)getDefaultSkuSelect:(id)arg1;
- (id)getShopConfig;
- (long long)getTemCachOfficeGoodsNumber;
- (void)removeOfficeGood:(id)arg1;
- (void)addOfficeGood:(id)arg1;
- (void)setGroupGoods:(id)arg1;
- (_Bool)isContainOfficeGood:(id)arg1;

@end

