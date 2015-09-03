#import <Foundation/Foundation.h>

@interface Statistics : NSObject
{
}

- (void)startSessionWithLaunchOptions:(NSDictionary *)launchOptions;
- (void)logEvent:(NSString *)eventName;
- (void)logEvent:(NSString *)eventName withParameters:(NSDictionary *)parameters;
- (void)logApiUsage:(NSString *)programName;
- (void)logLocation:(CLLocation *)location;

+ (instancetype)instance;

@property (nonatomic) BOOL enabled;

@end
