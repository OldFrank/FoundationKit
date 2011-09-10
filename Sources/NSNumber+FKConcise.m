// Part of FoundationKit http://foundationk.it

#import "NSNumber+FKConcise.h"

static NSNumberFormatter *numberFormatter = nil;

@implementation NSNumber (FKConcise)

+ (NSNumber *)numberWithString:(NSString *)string {
  static dispatch_once_t onceToken;
  
  dispatch_once(&onceToken, ^{
    numberFormatter = [[NSNumberFormatter alloc] init];
    [numberFormatter setNumberStyle:NSNumberFormatterDecimalStyle];    
  });
  
  if (string) {
    @try {
      return [numberFormatter numberFromString:string];
    }
    @catch (NSException * e) {
      // NSLog(@"NSNumberFormatter exception! parsing: %@", string);
    }
  }
  
  return nil;
}

@end
