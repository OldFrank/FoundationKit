// Part of FoundationKit http://foundationk.it

#import <Foundation/Foundation.h>

/**
 This category adds concise methods to NSObject for making various performSelector-calls.
 */
@interface NSObject (FKPerform)

/**
 performs the given selector that takes no arguments on self after the given delay.
 
 @param selector the selector to perform, taking no arguments
 @param delay the delay after which the selector gets peformed
 */
- (void)performSelector:(SEL)selector afterDelay:(NSTimeInterval)delay;

/**
 performs the given selector on self only if self responds to the selector.
 
 @param selector the selector to perform, taking no arguments
 */
- (id)performSelectorIfResponding:(SEL)selector;

/**
 performs the given selector on self only if self responds to the selector.
 
 @param selector the selector to perform, taking one arguments
 @param object the argument passed to the selector
 */
- (id)performSelectorIfResponding:(SEL)selector withObject:(id)object;

/**
 performs the given selector on self only if self responds to the selector.
 
 @param selector the selector to perform, taking two arguments
 @param object1 the first argument passed to the selector
 @param object2 the second argument passed to the selector
 */
- (id)performSelectorIfResponding:(SEL)selector withObject:(id)object1 withObject:(id)object2;
@end
