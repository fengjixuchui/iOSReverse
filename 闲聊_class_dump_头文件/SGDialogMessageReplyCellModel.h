//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDetailCellModel.h"

@class NSDictionary, NSMutableAttributedString, NSMutableDictionary, NSString, SGSGMessageTextCellTextView, UIImage;

@interface SGDialogMessageReplyCellModel : SGDialogDetailCellModel
{
    _Bool _hasReplayIV;
    NSMutableAttributedString *_messageString;
    NSMutableDictionary *_urlStrDic;
    NSString *_replayName;
    NSMutableAttributedString *_replayString;
    UIImage *_replayIconIamge;
    NSMutableDictionary *_replayUrlStrDic;
    NSDictionary *_replayMediaDic;
    UIImage *_replayImage;
    SGSGMessageTextCellTextView *_messageTextView;
    SGSGMessageTextCellTextView *_replayTextView;
    struct CGRect _messageTextViewFrame;
    struct CGRect _replayBackIVFrame;
    struct CGRect _replayNameLabelFrame;
    struct CGRect _replayIconFrame;
    struct CGRect _replayTextViewFrame;
    struct CGRect _replayIVFrame;
}

@property(retain, nonatomic) SGSGMessageTextCellTextView *replayTextView; // @synthesize replayTextView=_replayTextView;
@property(retain, nonatomic) SGSGMessageTextCellTextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) UIImage *replayImage; // @synthesize replayImage=_replayImage;
@property(nonatomic) _Bool hasReplayIV; // @synthesize hasReplayIV=_hasReplayIV;
@property(retain, nonatomic) NSDictionary *replayMediaDic; // @synthesize replayMediaDic=_replayMediaDic;
@property(retain, nonatomic) NSMutableDictionary *replayUrlStrDic; // @synthesize replayUrlStrDic=_replayUrlStrDic;
@property(retain, nonatomic) UIImage *replayIconIamge; // @synthesize replayIconIamge=_replayIconIamge;
@property(retain, nonatomic) NSMutableAttributedString *replayString; // @synthesize replayString=_replayString;
@property(copy, nonatomic) NSString *replayName; // @synthesize replayName=_replayName;
@property(nonatomic) struct CGRect replayIVFrame; // @synthesize replayIVFrame=_replayIVFrame;
@property(nonatomic) struct CGRect replayTextViewFrame; // @synthesize replayTextViewFrame=_replayTextViewFrame;
@property(nonatomic) struct CGRect replayIconFrame; // @synthesize replayIconFrame=_replayIconFrame;
@property(nonatomic) struct CGRect replayNameLabelFrame; // @synthesize replayNameLabelFrame=_replayNameLabelFrame;
@property(nonatomic) struct CGRect replayBackIVFrame; // @synthesize replayBackIVFrame=_replayBackIVFrame;
@property(retain, nonatomic) NSMutableDictionary *urlStrDic; // @synthesize urlStrDic=_urlStrDic;
@property(retain, nonatomic) NSMutableAttributedString *messageString; // @synthesize messageString=_messageString;
@property(nonatomic) struct CGRect messageTextViewFrame; // @synthesize messageTextViewFrame=_messageTextViewFrame;
- (void).cxx_destruct;
- (Class)getCellClass;
- (void)setReplayStringByString:(id)arg1;
- (struct CGSize)setCeilfSize:(struct CGSize)arg1;
- (void)calculateSubView;
- (id)initWithMessage:(id)arg1 member:(id)arg2;

@end

