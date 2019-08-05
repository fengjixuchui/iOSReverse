//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALAssetsLibrary, PHCachingImageManager;
@protocol TZImagePickerControllerDelegate;

@interface TZImageManager : NSObject
{
    _Bool _shouldFixOrientation;
    _Bool _sortAscendingByModificationDate;
    _Bool _hideWhenCanNotSelect;
    PHCachingImageManager *_cachingImageManager;
    id <TZImagePickerControllerDelegate> _pickerDelegate;
    double _photoPreviewMaxWidth;
    double _photoWidth;
    long long _columnNumber;
    long long _minPhotoWidthSelectable;
    long long _minPhotoHeightSelectable;
    ALAssetsLibrary *_assetLibrary;
}

+ (long long)authorizationStatus;
+ (void)deallocManager;
+ (id)manager;
@property(retain, nonatomic) ALAssetsLibrary *assetLibrary; // @synthesize assetLibrary=_assetLibrary;
@property(nonatomic) _Bool hideWhenCanNotSelect; // @synthesize hideWhenCanNotSelect=_hideWhenCanNotSelect;
@property(nonatomic) long long minPhotoHeightSelectable; // @synthesize minPhotoHeightSelectable=_minPhotoHeightSelectable;
@property(nonatomic) long long minPhotoWidthSelectable; // @synthesize minPhotoWidthSelectable=_minPhotoWidthSelectable;
@property(nonatomic) _Bool sortAscendingByModificationDate; // @synthesize sortAscendingByModificationDate=_sortAscendingByModificationDate;
@property(nonatomic) long long columnNumber; // @synthesize columnNumber=_columnNumber;
@property(nonatomic) double photoWidth; // @synthesize photoWidth=_photoWidth;
@property(nonatomic) double photoPreviewMaxWidth; // @synthesize photoPreviewMaxWidth=_photoPreviewMaxWidth;
@property(nonatomic) _Bool shouldFixOrientation; // @synthesize shouldFixOrientation=_shouldFixOrientation;
@property(nonatomic) __weak id <TZImagePickerControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
@property(retain, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
- (void).cxx_destruct;
- (id)fixOrientation:(id)arg1;
- (int)degressFromVideoFileWithAsset:(id)arg1;
- (id)fixedCompositionWithAsset:(id)arg1;
- (long long)orientationFromImage:(id)arg1;
- (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
- (id)modelWithResult:(id)arg1 name:(id)arg2 isCameraRoll:(_Bool)arg3 needFetchAssets:(_Bool)arg4;
- (struct CGSize)photoSizeWithAsset:(id)arg1;
- (_Bool)isPhotoSelectableWithAsset:(id)arg1;
- (id)getAssetIdentifier:(id)arg1;
- (_Bool)isCameraRollAlbum:(id)arg1;
- (_Bool)isAssetsArray:(id)arg1 containAsset:(id)arg2;
- (void)startExportVideoWithVideoAsset:(id)arg1 presetName:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getVideoOutputPathWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVideoOutputPathWithAsset:(id)arg1 presetName:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getVideoOutputPathWithAsset:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getVideoWithAsset:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVideoWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveVideoWithUrl:(id)arg1 location:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveVideoWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)savePhotoWithImage:(id)arg1 location:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)savePhotoWithImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getOriginalPhotoDataWithAsset:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getOriginalPhotoDataWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getOriginalPhotoWithAsset:(id)arg1 newCompletion:(CDUnknownBlockType)arg2;
- (void)getOriginalPhotoWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPostImageWithAlbumModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)getPhotoWithAsset:(id)arg1 photoWidth:(double)arg2 completion:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 networkAccessAllowed:(_Bool)arg5;
- (int)requestImageDataForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (int)getPhotoWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 networkAccessAllowed:(_Bool)arg4;
- (int)getPhotoWithAsset:(id)arg1 photoWidth:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (int)getPhotoWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getBytesFromDataLength:(long long)arg1;
- (void)getPhotosBytesWithArray:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getNewTimeFromDurationSecond:(long long)arg1;
- (unsigned long long)getAssetType:(id)arg1;
- (id)assetModelWithAsset:(id)arg1 allowPickingVideo:(_Bool)arg2 allowPickingImage:(_Bool)arg3;
- (void)getAssetFromFetchResult:(id)arg1 atIndex:(long long)arg2 allowPickingVideo:(_Bool)arg3 allowPickingImage:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getAssetsFromFetchResult:(id)arg1 allowPickingVideo:(_Bool)arg2 allowPickingImage:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getAssetsFromFetchResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllAlbums:(_Bool)arg1 allowPickingImage:(_Bool)arg2 needFetchAssets:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getCameraRollAlbum:(_Bool)arg1 allowPickingImage:(_Bool)arg2 needFetchAssets:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)authorizationStatusAuthorized;
- (void)configTZScreenWidth;

@end

