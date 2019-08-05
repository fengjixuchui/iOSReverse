//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SGUser;

@interface SGAccount : NSObject
{
    _Bool _globalMuteFlag;
    _Bool _vibrationAlertFlag;
    _Bool _audioCallMuteFlag;
    _Bool _soundAlertFlag;
    _Bool _pokeFlag;
    _Bool _previewFlag;
    _Bool _differentAccountSwitchLogin;
    SGUser *_user;
}

+ (id)getUser:(long long)arg1;
+ (id)instance;
@property(nonatomic) _Bool differentAccountSwitchLogin; // @synthesize differentAccountSwitchLogin=_differentAccountSwitchLogin;
@property(nonatomic) _Bool previewFlag; // @synthesize previewFlag=_previewFlag;
@property(nonatomic) _Bool pokeFlag; // @synthesize pokeFlag=_pokeFlag;
@property(nonatomic) _Bool soundAlertFlag; // @synthesize soundAlertFlag=_soundAlertFlag;
@property(nonatomic) _Bool audioCallMuteFlag; // @synthesize audioCallMuteFlag=_audioCallMuteFlag;
@property(nonatomic) _Bool vibrationAlertFlag; // @synthesize vibrationAlertFlag=_vibrationAlertFlag;
@property(nonatomic) _Bool globalMuteFlag; // @synthesize globalMuteFlag=_globalMuteFlag;
@property(retain, nonatomic) SGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)isSetPw;
- (void)updateUserWithResp:(id)arg1;
- (void)updateAccount;

@end

