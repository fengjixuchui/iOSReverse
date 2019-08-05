//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class CLLocation, NSMutableArray, NSString, TZAlbumModel, TZCollectionView, UIButton, UICollectionViewFlowLayout, UIImagePickerController, UIImageView, UILabel, UIView;

@interface TZPhotoPickerController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate>
{
    NSMutableArray *_models;
    UIView *_bottomToolBar;
    UIButton *_previewButton;
    UIButton *_doneButton;
    UIImageView *_numberImageView;
    UILabel *_numberLabel;
    UIButton *_originalPhotoButton;
    UILabel *_originalPhotoLabel;
    UIView *_divideLine;
    _Bool _shouldScrollToBottom;
    _Bool _showTakePhotoBtn;
    double _offsetItemCount;
    _Bool _isFirstAppear;
    _Bool _isSelectOriginalPhoto;
    _Bool _useCachedImage;
    long long _columnNumber;
    TZAlbumModel *_model;
    TZCollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    UIImagePickerController *_imagePickerVc;
    CLLocation *_location;
    struct CGRect _previousPreheatRect;
}

@property(nonatomic) _Bool useCachedImage; // @synthesize useCachedImage=_useCachedImage;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) UIImagePickerController *imagePickerVc; // @synthesize imagePickerVc=_imagePickerVc;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) TZCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isSelectOriginalPhoto; // @synthesize isSelectOriginalPhoto=_isSelectOriginalPhoto;
@property struct CGRect previousPreheatRect; // @synthesize previousPreheatRect=_previousPreheatRect;
@property(retain, nonatomic) TZAlbumModel *model; // @synthesize model=_model;
@property(nonatomic) long long columnNumber; // @synthesize columnNumber=_columnNumber;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
- (void).cxx_destruct;
- (id)aapl_indexPathsForElementsInRect:(struct CGRect)arg1;
- (id)assetsAtIndexPaths:(id)arg1;
- (void)computeDifferenceBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2 removedHandler:(CDUnknownBlockType)arg3 addedHandler:(CDUnknownBlockType)arg4;
- (void)updateCachedAssets;
- (void)resetCachedAssets;
- (void)dealloc;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)reloadPhotoArrayWithMediaType:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkSelectedModels;
- (void)scrollCollectionViewToBottom;
- (void)getSelectedPhotoBytes;
- (void)pushPhotoPrevireViewController:(id)arg1 needCheckSelectedModels:(_Bool)arg2;
- (void)pushPhotoPrevireViewController:(id)arg1;
- (void)refreshBottomToolBarStatus;
- (void)pushImagePickerController;
- (void)takePhoto;
- (void)setUseCachedImageAndReloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)callDelegateMethodWithPhotos:(id)arg1 assets:(id)arg2 infoArr:(id)arg3;
- (void)didGetAllPhotos:(id)arg1 assets:(id)arg2 infoArr:(id)arg3;
- (void)doneButtonClick;
- (void)originalPhotoButtonClick;
- (void)previewButtonClick;
- (void)navLeftBarButtonClick;
- (void)didChangeStatusBarOrientationNotification:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)configBottomToolBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configCollectionView;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)initSubviews;
- (void)fetchAssetModels;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

