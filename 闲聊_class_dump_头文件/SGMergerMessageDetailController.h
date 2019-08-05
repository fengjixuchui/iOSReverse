//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "ABNewPersonViewControllerDelegate-Protocol.h"
#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"
#import "CNContactViewControllerDelegate-Protocol.h"
#import "GLImagePreviewDelegate-Protocol.h"
#import "MergerCombatCelDelegate-Protocol.h"
#import "MergerDetailOtherCelDelegate-Protocol.h"
#import "MergerDetailPhotoDelegate-Protocol.h"
#import "MergerDetailTextDelegate-Protocol.h"
#import "MergerShopCellDelegate-Protocol.h"
#import "SGMergerDetailVideoDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLImagePreview, NSMutableArray, NSString, SGDialogs, SGMessage, UITableView;

@interface SGMergerMessageDetailController : SGViewController <UITableViewDelegate, UITableViewDataSource, MergerDetailOtherCelDelegate, SGMergerDetailVideoDelegate, MergerDetailPhotoDelegate, GLImagePreviewDelegate, MergerCombatCelDelegate, MergerDetailTextDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, CNContactViewControllerDelegate, CNContactPickerDelegate, MergerShopCellDelegate>
{
    SGMessage *_message;
    SGDialogs *_dialog;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    NSString *_sectionTitle;
    GLImagePreview *_imagePreview;
    NSMutableArray *_imageArray;
    NSString *_prepareCopytext;
}

@property(copy, nonatomic) NSString *prepareCopytext; // @synthesize prepareCopytext=_prepareCopytext;
@property(retain, nonatomic) NSMutableArray *imageArray; // @synthesize imageArray=_imageArray;
@property(nonatomic) __weak GLImagePreview *imagePreview; // @synthesize imagePreview=_imagePreview;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SGDialogs *dialog; // @synthesize dialog=_dialog;
@property(retain, nonatomic) SGMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)longPressCopyText;
- (_Bool)canBecomeFirstResponder;
- (void)longTapText:(id)arg1 tapView:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(const void *)arg2;
- (void)addNewContactByPhone:(id)arg1 contact:(id)arg2;
- (void)tapText:(id)arg1;
- (void)collectMessage:(id)arg1 currentResponerModel:(id)arg2;
- (void)handleForward:(id)arg1;
- (void)decodeQRImageWith:(id)arg1;
- (void)scanQrcode:(id)arg1;
- (void)saveImage:(id)arg1;
- (void)longPressGetImageViewForIndex:(long long)arg1;
- (void)showRecallMessage;
- (id)conversationGetImagePreViewMessageWithIndex:(long long)arg1;
- (_Bool)previewGetImageData:(id)arg1 imageViewForIndex:(long long)arg2 finished:(CDUnknownBlockType)arg3;
- (id)conversationPreviewHiddenSuperView:(id)arg1;
- (_Bool)conversationCanDownLoad:(id)arg1 index:(long long)arg2;
- (id)preview:(id)arg1 messageForIndex:(long long)arg2;
- (id)preview:(id)arg1 highQualityImageURLForIndex:(long long)arg2;
- (id)preview:(id)arg1 imageViewForIndex:(long long)arg2;
- (void)tapCombatDetail:(id)arg1;
- (void)tapPhoto:(id)arg1;
- (void)tapVideo:(id)arg1;
- (id)getMapController;
- (void)tapLocation:(id)arg1;
- (void)tapRobetCard:(id)arg1;
- (void)tapGameInvite:(id)arg1;
- (void)tapLink:(id)arg1;
- (void)enterFile:(id)arg1;
- (void)tapWhiteViewAction:(id)arg1;
- (void)tapShopDetail:(id)arg1;
- (_Bool)isFileVideoType:(id)arg1;
- (id)getShowText:(id)arg1;
- (void)setData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)chooseMoreOption;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

