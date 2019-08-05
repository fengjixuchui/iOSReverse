
#import <UIKit/UIKit.h>

@interface SGAppDelegate

@property (nonatomic, copy) NSString* newProperty;

+ (void)classMethod;

- (NSString*)getMyName;

- (void)newMethod:(NSString*) output;

@end

%hook SGAppDelegate

+ (void)classMethod
{
	%log;

	%orig;
}

%end


%hook SpringBoard

-(void)applicationDidFinishLaunching:(id)application {
%orig;

UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Hello, Gof!" message:@"LeeGof is very handsome" delegate:self cancelButtonTitle:@"OK" otherButtonTitles:nil];
[alert show];
}

%end
