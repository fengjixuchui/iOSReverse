//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "SGSearchMemberViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"

@class NSArray, NSString, SGGroupInfo, SGSearchMemberViewController, UICollectionView, UISearchController;

@interface SGAllMemberController : SGViewController <UICollectionViewDelegate, UICollectionViewDataSource, UISearchControllerDelegate, UISearchBarDelegate, SGSearchMemberViewDelegate>
{
    _Bool _isShowDelete;
    _Bool _isMemoryWarning;
    NSArray *_allmembers;
    long long _ownerId;
    CDUnknownBlockType _memberAliasBlock;
    SGGroupInfo *_groupInfo;
    CDUnknownBlockType _memberAddBlock;
    CDUnknownBlockType _memberDeleteBlock;
    UICollectionView *_allmemberCollectionView;
    UISearchController *_searchController;
    SGSearchMemberViewController *_searchVC;
}

@property(nonatomic) _Bool isMemoryWarning; // @synthesize isMemoryWarning=_isMemoryWarning;
@property(nonatomic) _Bool isShowDelete; // @synthesize isShowDelete=_isShowDelete;
@property(retain, nonatomic) SGSearchMemberViewController *searchVC; // @synthesize searchVC=_searchVC;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UICollectionView *allmemberCollectionView; // @synthesize allmemberCollectionView=_allmemberCollectionView;
@property(copy, nonatomic) CDUnknownBlockType memberDeleteBlock; // @synthesize memberDeleteBlock=_memberDeleteBlock;
@property(copy, nonatomic) CDUnknownBlockType memberAddBlock; // @synthesize memberAddBlock=_memberAddBlock;
@property(retain, nonatomic) SGGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(copy, nonatomic) CDUnknownBlockType memberAliasBlock; // @synthesize memberAliasBlock=_memberAliasBlock;
@property(nonatomic) long long ownerId; // @synthesize ownerId=_ownerId;
@property(retain, nonatomic) NSArray *allmembers; // @synthesize allmembers=_allmembers;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)setGroupMemberAlis:(id)arg1;
- (void)prepareWatchUserInfo:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

