//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _TtC8xianliao14SGStickerImage : NSObject
{
    // Error parsing type: , name: url
    // Error parsing type: , name: width
    // Error parsing type: , name: height
    // Error parsing type: , name: name
    // Error parsing type: , name: data
    // Error parsing type: , name: postfix
}

- (void).cxx_destruct;
- (id)initWithWidth:(double)arg1 height:(double)arg2 url:(id)arg3 name:(id)arg4;
- (id)initWithImg:(id)arg1 url:(id)arg2 name:(id)arg3;
@property(nonatomic, copy) NSString *postfix; // @synthesize postfix;
@property(nonatomic, copy) NSData *data; // @synthesize data;
@property(nonatomic, copy) NSString *name; // @synthesize name;
@property(nonatomic) double height; // @synthesize height;
@property(nonatomic) double width; // @synthesize width;
@property(nonatomic, copy) NSString *url; // @synthesize url;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

