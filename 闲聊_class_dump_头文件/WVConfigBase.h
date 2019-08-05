//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WVConfigHandler-Protocol.h"

@class NSString, WVConfigModel;

@interface WVConfigBase : NSObject <WVConfigHandler>
{
    WVConfigModel *_defaultConfig;
    WVConfigModel *_config;
    NSString *_configName;
    long long _configType;
    Class _configClass;
}

@property(retain, nonatomic) Class configClass; // @synthesize configClass=_configClass;
@property(nonatomic) long long configType; // @synthesize configType=_configType;
@property(copy, nonatomic) NSString *configName; // @synthesize configName=_configName;
@property(retain) WVConfigModel *config; // @synthesize config=_config;
@property(readonly, nonatomic) WVConfigModel *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
- (void).cxx_destruct;
- (void)writeConfigFile:(id)arg1;
- (id)readConfigFile;
- (void)reset;
- (void)configUpdated:(_Bool)arg1;
- (void)configUpdateFinished:(id)arg1;
- (void)getConfigFromJSON:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (_Bool)canUpdateConfig;
- (void)updateWithURL:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)updateWithNextVersion:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (unsigned long long)configEnv;
- (id)configVersion;
- (void)setupConfig;
- (id)initWithConfigName:(id)arg1 withClass:(Class)arg2 withType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

