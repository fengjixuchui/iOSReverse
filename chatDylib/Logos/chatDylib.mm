#line 1 "/Users/mac/Desktop/chat/chatDylib/Logos/chatDylib.xm"

#import <UIKit/UIKit.h>

@interface SGAppDelegate

@property (nonatomic, copy) NSString* newProperty;

+ (void)classMethod;

- (NSString*)getMyName;

- (void)newMethod:(NSString*) output;

@end


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class SGAppDelegate; @class SpringBoard; 
static void (*_logos_meta_orig$_ungrouped$SGAppDelegate$classMethod)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static void _logos_meta_method$_ungrouped$SGAppDelegate$classMethod(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$SpringBoard$applicationDidFinishLaunching$)(_LOGOS_SELF_TYPE_NORMAL SpringBoard* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$SpringBoard$applicationDidFinishLaunching$(_LOGOS_SELF_TYPE_NORMAL SpringBoard* _LOGOS_SELF_CONST, SEL, id); 

#line 16 "/Users/mac/Desktop/chat/chatDylib/Logos/chatDylib.xm"



static void _logos_meta_method$_ungrouped$SGAppDelegate$classMethod(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
	HBLogDebug(@"+[<SGAppDelegate: %p> classMethod]", self);

	_logos_meta_orig$_ungrouped$SGAppDelegate$classMethod(self, _cmd);
}






static void _logos_method$_ungrouped$SpringBoard$applicationDidFinishLaunching$(_LOGOS_SELF_TYPE_NORMAL SpringBoard* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id application) {
_logos_orig$_ungrouped$SpringBoard$applicationDidFinishLaunching$(self, _cmd, application);

UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Hello, Gof!" message:@"LeeGof is very handsome" delegate:self cancelButtonTitle:@"OK" otherButtonTitles:nil];
[alert show];
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$SGAppDelegate = objc_getClass("SGAppDelegate"); Class _logos_metaclass$_ungrouped$SGAppDelegate = object_getClass(_logos_class$_ungrouped$SGAppDelegate); MSHookMessageEx(_logos_metaclass$_ungrouped$SGAppDelegate, @selector(classMethod), (IMP)&_logos_meta_method$_ungrouped$SGAppDelegate$classMethod, (IMP*)&_logos_meta_orig$_ungrouped$SGAppDelegate$classMethod);Class _logos_class$_ungrouped$SpringBoard = objc_getClass("SpringBoard"); MSHookMessageEx(_logos_class$_ungrouped$SpringBoard, @selector(applicationDidFinishLaunching:), (IMP)&_logos_method$_ungrouped$SpringBoard$applicationDidFinishLaunching$, (IMP*)&_logos_orig$_ungrouped$SpringBoard$applicationDidFinishLaunching$);} }
#line 38 "/Users/mac/Desktop/chat/chatDylib/Logos/chatDylib.xm"
