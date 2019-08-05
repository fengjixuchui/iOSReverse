//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface TZImagePickerConfig : NSObject
{
    _Bool _allowPickingImage;
    _Bool _allowPickingVideo;
    _Bool _showSelectedIndex;
    _Bool _showPhotoCannotSelectLayer;
    _Bool _notScaleImage;
    NSString *_preferredLanguage;
    NSBundle *_languageBundle;
    long long _gifPreviewMaxImagesCount;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool notScaleImage; // @synthesize notScaleImage=_notScaleImage;
@property(nonatomic) _Bool showPhotoCannotSelectLayer; // @synthesize showPhotoCannotSelectLayer=_showPhotoCannotSelectLayer;
@property(nonatomic) _Bool showSelectedIndex; // @synthesize showSelectedIndex=_showSelectedIndex;
@property(nonatomic) long long gifPreviewMaxImagesCount; // @synthesize gifPreviewMaxImagesCount=_gifPreviewMaxImagesCount;
@property(retain, nonatomic) NSBundle *languageBundle; // @synthesize languageBundle=_languageBundle;
@property(nonatomic) _Bool allowPickingVideo; // @synthesize allowPickingVideo=_allowPickingVideo;
@property(nonatomic) _Bool allowPickingImage; // @synthesize allowPickingImage=_allowPickingImage;
@property(copy, nonatomic) NSString *preferredLanguage; // @synthesize preferredLanguage=_preferredLanguage;
- (void).cxx_destruct;

@end

