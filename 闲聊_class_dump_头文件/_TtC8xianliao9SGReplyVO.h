//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC8xianliao9SGReplyVO : NSObject
{
    // Error parsing type: , name: commentId
    // Error parsing type: , name: commentSeqno
    // Error parsing type: , name: replyId
    // Error parsing type: , name: replySeqnocommentSeqno
    // Error parsing type: , name: replyUserId
    // Error parsing type: , name: replyNickName
    // Error parsing type: , name: replySmallAvatarUrl
    // Error parsing type: , name: repliedUserId
    // Error parsing type: , name: repliedNickName
    // Error parsing type: , name: repliedSmallAvatarUrl
    // Error parsing type: , name: textContent
    // Error parsing type: , name: replyTime
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) long long replyTime; // @synthesize replyTime;
@property(nonatomic, copy) NSString *textContent; // @synthesize textContent;
@property(nonatomic, copy) NSString *repliedSmallAvatarUrl; // @synthesize repliedSmallAvatarUrl;
@property(nonatomic, copy) NSString *repliedNickName; // @synthesize repliedNickName;
@property(nonatomic) long long repliedUserId; // @synthesize repliedUserId;
@property(nonatomic, copy) NSString *replySmallAvatarUrl; // @synthesize replySmallAvatarUrl;
@property(nonatomic, copy) NSString *replyNickName; // @synthesize replyNickName;
@property(nonatomic) long long replyUserId; // @synthesize replyUserId;
@property(nonatomic) long long replySeqnocommentSeqno; // @synthesize replySeqnocommentSeqno;
@property(nonatomic, copy) NSString *replyId; // @synthesize replyId;
@property(nonatomic) long long commentSeqno; // @synthesize commentSeqno;
@property(nonatomic, copy) NSString *commentId; // @synthesize commentId;

@end

