//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGGoodsBaseViewController.h"

#import "SGHomePageCustomLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SGEnterXmallMainResp, SGGoodsDetailCustomBackitemView, SGGoodsHomePageReusableView, SGHomePageCustomLayout, SGSetGameLoadingView, UICollectionView, UIImageView, UIView;

@interface SGGoodsHomePageViewController : SGGoodsBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, SGHomePageCustomLayoutDelegate>
{
    _Bool _isRequestSecondKill;
    _Bool _loadingError;
    int _pageNo;
    long long _groupId;
    UICollectionView *_collectionView;
    NSMutableArray *_dataSource;
    SGSetGameLoadingView *_loadingView;
    UIView *_headView;
    UIView *_recommendView;
    SGGoodsHomePageReusableView *_homePageHeadView;
    SGGoodsDetailCustomBackitemView *_backLeftItemView;
    NSMutableArray *_goodsListArray;
    UIView *_goodListHeadView;
    UIView *_groupOwnerRecommendHeadView;
    SGEnterXmallMainResp *_mainResp;
    SGHomePageCustomLayout *_customLayout;
    UIView *_searchEnterView;
    UIView *_searchBkgView;
    UIImageView *_rightSearchImageView;
}

@property(nonatomic) _Bool loadingError; // @synthesize loadingError=_loadingError;
@property(retain, nonatomic) UIImageView *rightSearchImageView; // @synthesize rightSearchImageView=_rightSearchImageView;
@property(nonatomic) __weak UIView *searchBkgView; // @synthesize searchBkgView=_searchBkgView;
@property(retain, nonatomic) UIView *searchEnterView; // @synthesize searchEnterView=_searchEnterView;
@property(nonatomic) __weak SGHomePageCustomLayout *customLayout; // @synthesize customLayout=_customLayout;
@property(nonatomic) _Bool isRequestSecondKill; // @synthesize isRequestSecondKill=_isRequestSecondKill;
@property(retain, nonatomic) SGEnterXmallMainResp *mainResp; // @synthesize mainResp=_mainResp;
@property(retain, nonatomic) UIView *groupOwnerRecommendHeadView; // @synthesize groupOwnerRecommendHeadView=_groupOwnerRecommendHeadView;
@property(retain, nonatomic) UIView *goodListHeadView; // @synthesize goodListHeadView=_goodListHeadView;
@property(retain, nonatomic) NSMutableArray *goodsListArray; // @synthesize goodsListArray=_goodsListArray;
@property(retain, nonatomic) SGGoodsDetailCustomBackitemView *backLeftItemView; // @synthesize backLeftItemView=_backLeftItemView;
@property(retain, nonatomic) SGGoodsHomePageReusableView *homePageHeadView; // @synthesize homePageHeadView=_homePageHeadView;
@property(nonatomic) __weak UIView *recommendView; // @synthesize recommendView=_recommendView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) SGSetGameLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)getItemCellHeight:(id)arg1;
- (double)getSectionHeadHeight:(long long)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)tapMoreGroupRecommend;
- (void)resquestHomeSecondKill;
- (void)pullMoreData;
- (void)retryRequest;
- (void)pullRefreshNewData;
- (void)requestGetHomeData;
- (void)clickSearch;
- (void)scrollViewDidScroll:(id)arg1;
- (void)backAction;
- (void)creatChildView:(id)arg1;
- (void)setCustomLeftNavBarItem;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)isTabHomepageVC;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

