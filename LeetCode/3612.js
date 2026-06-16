/**
 * @param {string} s
 * @return {string}
 */
var processStr = function(s) {
    let result = [];
    
    for (const c of s) {
        if (c >= 'a' && c <= 'z') {
            result.push(c); //pop and push are more useful here
        } else if (c === '*') {
            result.pop();
        } else if (c === '#') {
            result = [...result, ...result]; //spread and then add the string two times
        } else if (c === '%') {
            result.reverse(); //built in array reverse function
        }
    }
    
    return result.join('');
};
