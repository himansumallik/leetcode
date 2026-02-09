/**
 * @param {string[]} instructions
 * @param {number[]} values
 * @return {number}
 */
var calculateScore = function(instructions, values) {
    const n = instructions.length;
    const visited = new Array(n).fill(false);
    let score = 0;
    let i = 0;

    while (i >= 0 && i < n && !visited[i]) {
        visited[i] = true;

        if (instructions[i] === "jump") {
            i += values[i];
        } else {
            score += values[i];
            i += 1;
        }
    }

    return score;
};